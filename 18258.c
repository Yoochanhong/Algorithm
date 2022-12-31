#include <stdio.h>
#include <string.h>

struct QueueType {
    int data[2000000];
    int front, rear;
};

void initQueue(struct QueueType *s) {
    s->front = s->rear = -1;
}

void push(struct QueueType *s, int value) {
    s->data[++(s->rear)] = value;
}

int is_empty(struct QueueType *s) {
    if (s->front == s->rear) return 1;
    else return 0;
}

int pop(struct QueueType *s) {
    if (is_empty(s)) return -1;
    return s->data[++(s->front)];
}


void front(struct QueueType *s) {
    if (is_empty(s)) printf("-1\n");
    else printf("%d\n", s->data[s->front + 1]);
}

void back(struct QueueType *s) {
    if (is_empty(s)) printf("-1\n");
    else printf("%d\n", s->data[s->rear]);
}

int main() {
    int n, input;
    char arr[10];
    struct QueueType s;
    initQueue(&s);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr);
        if (strcmp(arr, "push") == 0) {
            scanf("%d", &input);
            push(&s, input);
        } else if (strcmp(arr, "pop") == 0) {
            printf("%d\n", pop(&s));
        } else if (strcmp(arr, "empty") == 0) {
            if (is_empty(&s)) printf("1\n");
            else printf("0\n");
        } else if (strcmp(arr, "size") == 0) {
            printf("%d\n", s.rear - s.front);
        } else if (strcmp(arr, "front") == 0) {
            front(&s);
        } else if (strcmp(arr, "back") == 0) {
            back(&s);
        }
    }
    return 0;
}