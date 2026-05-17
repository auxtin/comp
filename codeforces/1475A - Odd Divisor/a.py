def main():
    t = int(input().strip())
    for _ in range(t):
        n = int(input().strip())
        if n & (n - 1) == 0:
            print("NO")
        else:
            print("YES")

if __name__ == "__main__":
    main()
