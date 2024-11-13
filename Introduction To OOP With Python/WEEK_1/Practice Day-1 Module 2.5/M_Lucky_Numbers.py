
def is_lucky(num):
    while num > 0:
        digit = num % 10
        if digit != 4 and digit != 7:
            return False
        num //= 10
    return True

def lucky_numbers_between(A, B):
    lucky_nums = []
    for i in range(A, B+1):
        if is_lucky(i):
            lucky_nums.append(i)
    return lucky_nums if lucky_nums else [-1]

A, B = map(int, input().split())

print(*lucky_numbers_between(A, B))
