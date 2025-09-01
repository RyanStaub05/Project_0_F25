#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* rand_string(int length) {
    static char charset[] = "abcdefghijklmnopqrstuvwxyz";
    char *str = malloc(length + 1);
    if (str) {
        for (int i = 0; i < length; i++) {
            int key = rand() % (int)(sizeof(charset) - 1);
            str[i] = charset[key];
        }
        str[length] = '\0';
    }
    return str;
}
