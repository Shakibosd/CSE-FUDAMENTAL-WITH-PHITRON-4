
def main():
    N = input().strip()

    reversed_N = N[::-1].lstrip('0')
    print(reversed_N)

    if N == N[::-1]:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()
