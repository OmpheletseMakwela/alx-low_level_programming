#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int i;
	int num_bytes;
	int num_opcodes;
	
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

   num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }


    num_opcodes = num_bytes / 2;
    unsigned char *main_function = (unsigned char *)main;
    for (i = 0; i < num_opcodes; i++) {
        printf("%02x", main_function[i]);
    }

    printf("\n");

    return 0;
}
