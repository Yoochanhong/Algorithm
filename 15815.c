#include <stdio.h>
#include <string.h>

int Stack[101];
int top = -1;

void push(int v) {
    Stack[++top] = v;
}

int pop() {
    return Stack[top--];
}

int evaluate(char *arr) {
    int op1, op2;
    int len = strlen(arr);

    for (int i = 0; i < len; i++) {
        if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/') {
            op2 = pop();
            op1 = pop();
            switch (arr[i]) {
                case '+':
                    push(op1 + op2);
                    break;
                case '-':
                    push(op1 - op2);
                    break;
                case '*':
                    push(op1 * op2);
                    break;
                case '/':
                    push(op1 / op2);
                    break;
            }
        } else push(arr[i] - '0');
    }
    return pop();
}

int main() {
    char arr[101];
    scanf("%s", arr);
    printf("%d", evaluate(arr));
}