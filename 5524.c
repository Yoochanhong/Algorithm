#include <stdio.h>
#include <string.h>

int main() {
  int n;
  char arr[21];
  scanf("%d", &n);
  for (int i = 0; i<n; i++){
    scanf("%s", arr);
    for (int j = 0; j<strlen(arr); j++){
      if (arr[j] < 97) arr[j] +=32;
      printf("%c", arr[j]);
    }
    printf("\n");
  }
  return 0;
}
  