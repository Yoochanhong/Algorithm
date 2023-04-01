#include <stdio.h>

int main() {
    int n, k, Queue[1000000], front = 0, rear;
    scanf("%d %d", &n, &k);
    for (int i = 0; i <= n; i++) {
        Queue[i] = i + 1;
    }
    rear = n - 1;
    printf("<");
    for (int i = 0; i < n - 1; i++) {
        int count = k - 1;
        while (count > 0) {
            count--;
            Queue[++rear] = Queue[front++];
        }
        printf("%d, ", Queue[front++]);
    }
    printf("%d>", Queue[front]);
    return 0;
}