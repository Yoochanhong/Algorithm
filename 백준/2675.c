#include <stdio.h>
#include <string.h>

int main() {
  int n, r;
  char arr[21];
  scanf("%d", &n);
  for (int i = 0; i<n; i++){
    scanf("%d %s", &r, arr);
    for (int j = 0; j < strlen(arr); j++){
      for (int k = 0; k < r; k++){
        printf("%c", arr[j]);
        }
      }printf("\n");
    }
  return 0;
}
