def main():
    n, m = map(int,input().split())
    res = n + (n-1) // (m - 1)
    print(res)

if __name__ == "__main__":
    main()
