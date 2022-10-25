// C Program to write a binary file of 1000 random integers

#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
    FILE *fp;
    int i, n;
    srand(time(NULL));
    // open a file in ../out relative to the current file
    char *path = dirname(dirname(realpath(__FILE__, NULL)));
    char *filename = "random.bin";
    char *filepath = malloc(strlen(path) + strlen(filename) + 2);
    strcpy(filepath, path);
    strcat(filepath, "/out/");
    strcat(filepath, filename);
    fp = fopen(filepath, "wb");
    if (fp == NULL) {
        printf("Error opening file! %s \n", filepath);
        exit(1);
    }

    for (i = 0; i < 1000; i++) {
        n = rand();
        fwrite(&n, sizeof(int), 1, fp);
    }
    fclose(fp);
    return 0;
}