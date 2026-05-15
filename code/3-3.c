#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_str(const void *a, const void *b) {
    char *str1 = *(char **)a;
    char *str2 = *(char **)b;

    return strcmp(str1, str2);
}

int main(void) {
    char *words[] = {
        "orange",
        "apple",
        "banana",
        "ant"
    };

    int size = sizeof(words) / sizeof(words[0]);

    qsort(words, size, sizeof(char *), cmp_str);

    for (int i = 0; i < size; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}