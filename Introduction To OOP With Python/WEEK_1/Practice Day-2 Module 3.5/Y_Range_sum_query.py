


n, q = map(int, input().split())
a = list(map(int, input().split()))

# Prefix sum
pre = [0] * n
pre[0] = a[0]
for i in range(1, n):
    pre[i] = a[i] + pre[i - 1]

for i in range(q):
    l, r = map(int, input().split())
    l -= 1
    r -= 1
    if l == 0:
        sum_ = pre[r]
    else:
        sum_ = pre[r] - pre[l - 1]
    print(sum_)
