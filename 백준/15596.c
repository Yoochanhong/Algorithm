long long sum(int *a, int n) {
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i];
    }
    return ans;
}