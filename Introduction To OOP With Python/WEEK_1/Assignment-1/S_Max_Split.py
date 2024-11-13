
s = input()
cntR = 0
cntL = 0
ans = ''
maxcnt = 0
lst = []
for char in s:
    if char == 'L':
        cntL += 1
    else:
        cntR += 1
    ans += char
    if cntR == cntL:
        lst.append(ans)
        maxcnt += 1
        ans = ''
print(maxcnt)
for i in range(len(lst)):
    print(lst[i])