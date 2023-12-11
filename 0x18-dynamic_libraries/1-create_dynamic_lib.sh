#!/bin/bash

CC=gcc
CFLAGS="-shared -fPIC"

SOURCE_FILES="0-main.c  isalpha.c  islower.c  memcpy.c  putchar.c  strcat.c  strcmp.c  strlen.c   strncpy.c  strspn.c atoi.c    isdigit.c  isupper.c  memset.c  puts.c     strchr.c  strcpy.c  strncat.c  strpbrk.c  strstr.c"
OUTPUT_LIBRARY="liball.so"

$CC $CFLAGS -o $OUTPUT_LIBRARY $SOURCE_FILES
