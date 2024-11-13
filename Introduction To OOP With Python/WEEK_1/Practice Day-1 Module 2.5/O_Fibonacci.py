def fibonacci(n):
    if n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        first = 0
        second = 1
        for i in range(3, n + 1):
            fibo = first + second
            first = second
            second = fibo
        return fibo

n = int(input())

print(fibonacci(n))
