#include <stdio.h>

int n, m;
char arr[101][101];

void dfs(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= m) return;
    if (arr[x][y] == '#') {
        arr[x][y] = '.';
        dfs(x - 1, y);
        dfs(x + 1, y);
        dfs(x, y - 1);
        dfs(x, y + 1);
        dfs(x - 1, y - 1);
        dfs(x - 1, y + 1);
        dfs(x + 1, y - 1);
        dfs(x + 1, y + 1);
    }
}

int main() {
    int cnt = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %1c", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '#') {
                dfs(i, j);
                cnt++;
            }
        }
    }
    printf("%d", cnt);
}
