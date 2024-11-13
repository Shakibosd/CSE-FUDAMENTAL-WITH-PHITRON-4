
n = int(input())
ar = list(map(int, input().split()))

minimum = float('inf')
maximum = float('-inf')
pos1 = 0
pos2 = 0

for i in range(n):
    if ar[i] < minimum:
        minimum = ar[i]
        pos1 = i
    if ar[i] > maximum:
        maximum = ar[i]
        pos2 = i

ar[pos1], ar[pos2] = ar[pos2], ar[pos1]

for num in ar:
    print(num, end=" ")



