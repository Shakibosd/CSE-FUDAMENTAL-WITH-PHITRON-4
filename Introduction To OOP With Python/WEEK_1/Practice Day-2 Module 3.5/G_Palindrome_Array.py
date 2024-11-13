
def is_palindrome(arr):
    start = 0
    end = len(arr) - 1
    while start < end:
        if arr[start] != arr[end]:
            return False
        start += 1
        end -= 1
    return True

N = int(input())
A = list(map(int, input().split()))

if is_palindrome(A):
    print("YES")
else:
    print("NO")
