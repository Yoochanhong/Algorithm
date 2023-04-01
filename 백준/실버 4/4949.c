#include<stdio.h>
#include<string.h>

#define MAX_STACK_SIZE 100
typedef struct StackType {
    char data[MAX_STACK_SIZE];
    int top;
} StackType;

void init_stack(struct StackType *p) {
    p->top = -1;
}

int is_empty(struct StackType *p) {
    if (p->top == -1)
        return 1;
    else return 0;

}

int is_full(struct StackType *p) {
    if (p->top == MAX_STACK_SIZE - 1)
        return 1;
    else return 0;
}

void push(struct StackType *p, int item) {
    if (is_full(p))
        printf("오버플로우");
    else p->data[++(p->top)] = item;
}

int pop(struct StackType *p) {
    if (is_empty(p))
        printf("언더플로우");
    else
        return p->data[(p->top)--];
}

int check_matching(char in[]) {
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
                return 0;
            } else {
                open_ch = pop(&s);
                if (((ch == ')' && open_ch == '(') ||
                     (ch == ']' && open_ch == '[') ||
                     (ch == '}' && open_ch == '{')) == 0) {
                    return 0;
                }
            }
        }
    }

    if (is_empty(&s) == 0) {
        return 0;
    } else return 1;
}

int main(void) {
    char arr[102];
    while (1) {
        gets(arr);
        if (arr[0] == '.' && strlen(arr) == 1) break;
        if (check_matching(arr) == 1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}