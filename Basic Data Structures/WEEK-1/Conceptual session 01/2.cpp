//2. O(N*N)
int a = 0, N;
for(int i = 0; i < N; i++) {
    for (int j = N; j > i; j--) {
        a = a + i + j;
    }
}
