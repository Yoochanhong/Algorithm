#include <stdio.h>
#include <string.h>

struct StackType {
    char data[101];
    int top;
};

void initStack(struct StackType *s) {
    s->top = -1;
}

void push(struct StackType *s, int item) {
    s->data[++(s->top)] = item;
}

char pop(struct StackType *s) {
    return s->data[(s->top)--];
}

char peek(struct StackType *s) {
    return s->data[s->top];
}

int rank(char s) {
    if (s == '(' || s == ')') return 0;
    else if (s == '+' || s == '-') return 1;
    else if (s == '*' || s == '/') return 2;
    else return -1;
}

void postfixNotation(char *arr) {
    struct StackType s;
    int len = strlen(arr);
    char ch;
    initStack(&s);
    for (int i = 0; i < len; i++) {
        if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/') {
            while (rank(peek(&s)) >= rank(arr[i])) {
                printf("%c", pop(&s));
            }
            push(&s, arr[i]);
        } else if (arr[i] == '(') push(&s, arr[i]);
        else if (arr[i] == ')') {
            ch = pop(&s);
            while (ch != '(') {
                printf("%c", ch);
                ch = pop(&s);
            }
        } else printf("%c", arr[i]);
    }
    while (s.top != -1) {
        printf("%c", pop(&s));
    }
}

int main() {
    char arr[101];
    scanf("%s", arr);
    postfixNotation(arr);
    return 0;
}