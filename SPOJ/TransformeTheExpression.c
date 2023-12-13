#include <stdio.h>

char rpn[400][100];
static int k = 0;
char stack[400];
int top = -1;
char po;

// Function declarations
void buildTree(char str1[400]);
void push(char a);
void pop();

int main() {
    int n, i, j;
    scanf("%d", &n);
    char str[400][n];
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]);
        buildTree(str[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; rpn[j][i] != '\0'; j++)
            printf("%c", rpn[j][i]);
        printf("\n");
    }

    return 0;
}

void buildTree(char str1[400]) {
    int i = 0;
    int j = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '(') {
            while (str1[i + 1] == '(')
                i++;
        } else if (str1[i] == ')') {
            pop();
            rpn[j][k] = po;
            j++;
        } else {
            if ((str1[i] != '+') && (str1[i] != '-') && (str1[i] != '*') && (str1[i] != '/') && (str1[i] != '^')) {
                rpn[j][k] = str1[i];
                j++;
            } else {
                push(str1[i]);
            }
        }
        i++;
    }
    k++;
}

void push(char a) {
    stack[++top] = a;
}

void pop() {
    po = stack[top];
    top--;
}
