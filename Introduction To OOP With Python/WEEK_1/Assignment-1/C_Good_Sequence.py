
n = int(input())
a = list(map(int, input().split()))
d = {}
ans = 0
for i in a:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1
for i, cnt in d.items():
    if cnt > i:
        ans += cnt - i
    elif cnt < i:
        ans += cnt
print(ans)