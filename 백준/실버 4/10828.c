#include <stdio.h>
#include <string.h>


int Stack[100001];
int count = 0;

void empty() {
    if (count <= 0) printf("1\n");
    else printf("0\n");
}

void top() {
    if (count <= 0) printf("-1\n");
    else printf("%d\n", Stack[count]);
}


void push(int item) {
    Stack[++count] = item;
}

void pop() {
    if (count <= 0) printf("-1\n");
    else printf("%d\n", Stack[count--]);
}

int main() {
    int n, num;
    char arr[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr);
        if (strcmp(arr, "push") == 0) {
            scanf("%d", &num);
            push(num);
        } else if (strcmp(arr, "pop") == 0) {
            pop();
        } else if (strcmp(arr, "top") == 0) {
            top();
        } else if (strcmp(arr, "size") == 0) {
            printf("%d\n", count);
        } else if (strcmp(arr, "empty") == 0) {
            empty();
        }
    }
    return 0;
}