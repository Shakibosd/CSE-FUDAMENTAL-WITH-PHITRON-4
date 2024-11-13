
n = int(input())
num = list(map(int, input().split()))
sum = 0
flag = 1

while flag:
    for i in range(n):
        if num[i] % 2 != 0:
            flag = 0
            break
        num[i] //= 2
    if flag:
        sum += 1

print(sum)
