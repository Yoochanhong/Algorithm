#include <stdio.h>

int main() {
  int n;
  int x, y, z;
  scanf("%d", &n);
  for (int i = 1; i<=n; i++){
    scanf("%d %d %d", &x, &y, &z);
    if (x + y <= z || y + z <= x || x + z <= y){
      printf("Case #%d: invalid!\n", i);
    } else {
      if (x == y && y == z){
        printf("Case #%d: equilateral\n", i);
      } else if (x != y && y != z){
        printf("Case #%d: scalene\n", i);
      } else printf("Case #%d: isosceles\n", i);
    }
  }
    return 0;
}
