#include<stdio.h>
#include<string.h>

int count = 0;
typedef struct StackType {
    char data[51];
    int top;
} StackType;

void init_stack(struct StackType *p) {
    p->top = -1;
}

int is_empty(struct StackType *p) {
    return (p->top == -1);
}

int is_full(struct StackType *p) {
    return (p->top == 50);
}

void push(struct StackType *p, int item) {
    if (is_full(p)) count++;
    else p->data[++(p->top)] = item;
}

int pop(struct StackType *p) {
    if (is_empty(p)) count++;
    else return p->data[(p->top)--];
}

void check_matching(char in[]) {
    StackType s;
    char ch, open_ch;
    int i, n = strlen(in);
    init_stack(&s);

    for (i = 0; i < n; i++) {
        ch = in[i];
        if (ch == '(' || ch == '[' || ch == '{')
            push(&s, ch);
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (is_empty(&s) == 1) {
                count++;
            } else {
                open_ch = pop(&s);
                if (((ch == ')' && open_ch == '(') ||
                     (ch == ']' && open_ch == '[') ||
                     (ch == '}' && open_ch == '{')) == 0) {
                    count++;
                }
            }
        }
    }

    while (is_empty(&s) == 0) {
        pop(&s);
        count++;
    }
}

int main() {
    char arr[51];
    scanf("%s", arr);
    check_matching(arr);
    printf("%d", count);
    return 0;
}