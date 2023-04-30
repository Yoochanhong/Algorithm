#include <stdio.h>
#include <stdlib.h>

int *solution(int sequence[], size_t sequence_len, int k) {
    int *answer = (int *)malloc(2);
    int s = 0, e = 0, sum = sequence[0], w = 1000000001;
    while (s <= e && e < sequence_len) {
        if (sum < k) {
            sum += sequence[++e];
        } else {
            if (sum == k &&w > e - s) {
                w = e - s;
                answer[0] = s, answer[1] = e;
            }
            sum -= sequence[s++];
        }
    }
    return answer;
}