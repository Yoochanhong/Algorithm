#include <stdio.h>
#include <string.h>

int main() {
  int c = 0;
  char arr[101];
  scanf("%s", arr);
  for (int i = 0; i<strlen(arr); i++){
    if (arr[i] == ',') c++;
  }
  printf("%d", c + 1);
    return 0;
}
