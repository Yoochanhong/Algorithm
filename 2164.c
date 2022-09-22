#include <stdio.h>

int main() {
  int n, j = 1;
  scanf("%d", &n);
  while (1) {
     if (n < j)
        break;
     j *= 2;
  }
  j /= 2;
  if (j == n) printf("%d", n);
  else printf("%d", (n - j) * 2);
}
