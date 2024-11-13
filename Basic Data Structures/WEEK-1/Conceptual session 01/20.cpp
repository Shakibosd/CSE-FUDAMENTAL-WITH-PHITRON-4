// 20.
// Time Complexity: O(2^n) without memoization, O(n) with memoization
// Space Complexity: O(n) with memoization

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
