#include <stdio.h>
#include <string.h>
#include <ctype.h>

void camel(char *s) {
    for (int i = 0; s[i]; i++) {
        if (isupper(s[i])) {
            memmove(s + i + 1, s + i, strlen(s) - i + 1);
            s[i] = '_';
            s[i + 1] = tolower(s[i + 1]);
        }
    }
}

void snake(char *s) {
    int dimana[255];
    int ada = 0;
    char und = '_';

    for (int i = 0; s[i]; i++) {
        if (s[i] == und) {
            dimana[ada++] = i;
            memmove(s + i, s + i + 1, strlen(s + i + 1) + 1);
        }
    }

    for (int i = 0; i < ada; i++) {
        if (dimana[i] < strlen(s)) {
            s[dimana[i]] = toupper(s[dimana[i]]);
        }
    }
}

int main() {
    char s[101];
    scanf("%s", s);

    if (strchr(s, '_') != NULL && strchr(s, '_') < s + strlen(s))
        snake(s);
    else
        camel(s);

    printf("%s\n", s);
    return 0;
}
