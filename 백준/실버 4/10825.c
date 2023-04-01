#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int lang, eng, math;
} stu;

int comp(const void *a, const void *b) {
    stu *x = (stu *) a;
    stu *y = (stu *) b;
    if (x->lang < y->lang) {
        return 1;
    } else if (x->lang > y->lang) {
        return -1;
    } else {
        if (x->eng > y->eng) return 1;
        else if (x->eng < y->eng) return -1;
        else {
            if (x->math < y->math) return 1;
            else if (x->math > y->math) return -1;
            else {
                return strcmp(x->name, y->name);
            }
        }
    }
}

int main() {
    stu arr[100001];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", arr[i].name, &arr[i].lang, &arr[i].eng, &arr[i].math);
    }
    qsort(arr, n, sizeof(arr[0]), comp);
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i].name);
    }
}