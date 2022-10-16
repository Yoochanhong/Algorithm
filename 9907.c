#include <stdio.h>

int main(){
    
    int n, arr[7], sum = 0, m = 2;
    scanf("%d", &n);
    for (int i = 6; i>=0; i--){
        arr[i] = n%10;
        n/=10;
        if (i == 0){
            sum += arr[i] * 2;
        }
        else {
            sum += arr[i] * m;
            m++;
        }
    }
    switch(sum%11){
        case 0:
            printf("J");
            break;
        case 1:
            printf("A");
            break;
        case 2:
            printf("B");
            break;
        case 3:
            printf("C");
            break;
        case 4:
            printf("D");
            break;
        case 5:
            printf("E");
            break;
        case 6:
            printf("F");
            break;
        case 7:
            printf("G");
            break;
        case 8:
            printf("H");
            break;
        case 9:
            printf("I");
            break;
        case 10:
            printf("Z");
            break;
    }
    return 0;
}

