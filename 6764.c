#include <stdio.h>

int main() {
  int arr[4], sum = 0;
  for (int i = 0; i < 4; i++){
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 3; i++){
    if (arr[i] < arr[i+1]) sum++;
    else if (arr[i] == arr[i+1]){
      for (int i = 0; i<3; i++){
        if (arr[i] != arr[i+1]){
          printf("No Fish");
          return 0;
        }
        else sum +=0;
      }
    }
    else if (arr[i] > arr[i+1])sum--;
  }
  if (sum == 3) printf("Fish Rising");
  else if (sum == -3) printf("Fish Diving");
  else if (sum == 0) printf("Fish At Constant Depth");
  return 0;
}
