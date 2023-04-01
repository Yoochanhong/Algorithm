#include <stdio.h>
#include <string.h>


int main() {
  char arr[101], arr1[101], s, n, big, small;
  scanf("%s %c %s", arr, &s, arr1);
  if (s == '+'){
    if (strlen(arr) >= strlen(arr1)){
      big = strlen(arr);
      small = strlen(arr1);
      } else {
      big = strlen(arr1);
      small = strlen(arr);
      }
    n = big - small;
    if (n == 0) printf("2");
    else printf("1");
    for (int i = 1; i<big; i++){
      if (i == n){
        printf("1");
      } else printf("0");
    }
  } else {
    printf("%s", arr);
    for (int i = 0; i<strlen(arr1)-1; i++){
      printf("0");
    }
  }
  
    return 0;
}
