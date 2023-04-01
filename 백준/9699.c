#include <stdio.h>
#include <math.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++){
    int arr[5], big = 0;
    for (int j = 0; j<5; j++){
      scanf("%d", &arr[j]);
      if (arr[j] > big) big = arr[j];
    }
    printf("Case #%d: %d\n", i, big);
  }
  return 0;
}
