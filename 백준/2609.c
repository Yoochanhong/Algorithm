#include <stdio.h>

int main(){
  int m, n, big, small, s=0, k=0;
  scanf("%d %d",&m, &n);
  big = m > n ? m : n;
  small = m > n ? n : m;
  for (int i = 1; i<=big; i++){
    if (m % i == 0 && n % i == 0) s = i;
  }
  for (int i = 1; 1 ; i++){
    if (i%m==0 && i%n==0){
      k = i;
      break;
    }
  }
  printf("%d\n%d", s, k);
  return 0;
}
