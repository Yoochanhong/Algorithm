#include <stdio.h>
#include <string.h>

int queue[10000];
int front = -1;
int rear = -1;

void push(int item) {
    queue[++rear] = item;
}

int is_empty() {
    if (front == rear) return 1;
    else return 0;
}

int pop() {
    if (is_empty()) return -1;
    else return queue[++front];
}

int front_func() {
    if (is_empty()) return -1;
    else return queue[front + 1];
}

int back_func() {
    if (is_empty()) return -1;
    else return queue[rear];
}

int main() {
    int n, input;
    char arr[6];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr);
        if (strcmp(arr, "push") == 0) {
            scanf("%d", &input);
            push(input);
        } else if (strcmp(arr, "pop") == 0) printf("%d\n", pop());
        else if (strcmp(arr, "size") == 0) printf("%d\n", rear - front);
        else if (strcmp(arr, "empty") == 0) printf("%d\n", is_empty());
        else if (strcmp(arr, "front") == 0) printf("%d\n", front_func());
        else printf("%d\n", back_func());
    }
    return 0;
}