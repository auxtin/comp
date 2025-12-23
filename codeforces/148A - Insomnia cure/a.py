def main():
    k,l,m,n = list(int(input()) for _ in range(4))
    d = int(input())
    ans = 0
    for i in range(1,d + 1):
        if i % k == 0 or i % l == 0 or i % m == 0 or i % n == 0:
            ans += 1
    print(ans)


if __name__ == "__main__":
    main()