
def smallest_possible_sum(N, A):
    min_sum = float('inf')
    for i in range(N):
        for j in range(i + 1, N):
            result = A[i] + A[j] + j - i
            min_sum = min(min_sum, result)
    return min_sum

T = int(input())

for i in range(T):
    N = int(input())

    A = list(map(int, input().split()))

    print(smallest_possible_sum(N, A))
