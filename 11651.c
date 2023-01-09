#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} c;

int comp(const void *a, const void *b) {
    c a1 = *(c *) a;
    c b1 = *(c *) b;
    if (a1.y > b1.y) return 1;
    else if (a1.y == b1.y) {
        if (a1.x > b1.x) return 1;
        else return -1;
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    c arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    qsort(arr, n, sizeof(arr[0]), comp);
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
}