#include <stdio.h>

int main() {
    char wb[8][8] = {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
                     'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
                     'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
                     'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
                     'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
                     'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
                     'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
                     'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'};

    char bw[8][8] = {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
                     'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
                     'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
                     'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
                     'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
                     'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
                     'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
                     'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'};
    int n, m, count = 100;
    char arr[51][51];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < n - 7; i++) {
        for (int j = 0; j < m - 7; j++) {
            int c1 = 0, c2 = 0;
            for (int k = i, indexI = 0; k < i + 8; k++, indexI++) {
                for (int l = j, indexJ = 0; l < j + 8; l++, indexJ++) {
                    if (arr[k][l] != wb[indexI][indexJ]) c1++;
                    else if (arr[k][l] != bw[indexI][indexJ]) c2++;
                }
            }
            if ((c1 < c2 ? c1 : c2) < count) count = c1 < c2 ? c1 : c2;
        }
    }
    printf("%d", count);
    return 0;
}