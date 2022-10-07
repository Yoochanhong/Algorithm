#include <stdio.h>

int main(){

  int n, n1, n2, n3, n4, i = 0;
  while(1){
    i++;
    scanf("%d", &n);
    if (n == 0) return 0;
    n1 = n * 3;
    n4 = n/2;
    if (n1 % 2 == 0) printf("%d. even %d\n", i, n4);
    else printf("%d. odd %d\n", i, n4);
  }
  return 0;
}
