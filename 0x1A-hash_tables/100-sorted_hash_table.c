#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size) {
    shash_table_t *ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return NULL;

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    if (ht->array == NULL) {
        free(ht);
        return NULL;
    }

    ht->shead = NULL;
    ht->stail = NULL;

    return ht;
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value) {
    if (ht == NULL || key == NULL || *key == '\0')
        return 0;

    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    shash_node_t *new_node = malloc(sizeof(shash_node_t));

    if (new_node == NULL)
        return 0;

    new_node->key = strdup(key);
    if (new_node->key == NULL) {
        free(new_node);
        return 0;
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL) {
        free(new_node->key);
        free(new_node);
        return 0;
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    /* Insert node into the sorted linked list */
    if (ht->shead == NULL || strcmp(new_node->key, ht->shead->key) <= 0) {
        new_node->snext = ht->shead;
        new_node->sprev = NULL;

        if (ht->shead != NULL)
            ht->shead->sprev = new_node;

        ht->shead = new_node;

        if (ht->stail == NULL)
            ht->stail = new_node;
    } else {
        shash_node_t *temp = ht->shead;

        while (temp->snext != NULL && strcmp(new_node->key, temp->snext->key) > 0)
            temp = temp->snext;

        new_node->snext = temp->snext;
        new_node->sprev = temp;

        if (temp->snext != NULL)
            temp->snext->sprev = new_node;

        temp->snext = new_node;

        if (new_node->snext == NULL)
            ht->stail = new_node;
    }

    return 1;
}

char *shash_table_get(const shash_table_t *ht, const char *key) {
    if (ht == NULL || key == NULL || *key == '\0')
        return NULL;

    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    shash_node_t *node = ht->array[index];

    while (node != NULL) {
        if (strcmp(node->key, key) == 0)
            return node->value;
        node = node->next;
    }

    return NULL;
}

void shash_table_print(const shash_table_t *ht) {
    if (ht == NULL)
        return;

    shash_node_t *node = ht->shead;

    printf("{");
    while (node != NULL) {
        printf("'%s': '%s'", node->key, node->value);
        if (node->snext != NULL)
            printf(", ");
        node = node->snext;
    }
    printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht) {
    if (ht == NULL)
        return;

    shash_node_t *node = ht->stail;

    printf("{");
    while (node != NULL) {
        printf("'%s': '%s'", node->key, node->value);
        if (node->sprev != NULL)
            printf(", ");
        node = node->sprev;
    }
    printf("}\n");
}

void shash_table_delete(shash_table_t *ht) {
    if (ht == NULL)
        return;

    shash_node_t *node, *temp;
    unsigned long int i;

    for (i = 0; i < ht->size; i++) {
        node = ht->array[i];
        while (node != NULL) {
            temp = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = temp;
        }
    }

    free(ht->array);
    free(ht);
}
