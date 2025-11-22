def main():
    line = input()
    parts = line.split()
    n,k = map(int,parts)

    for _ in range(k):
        if n % 10 != 0:
            n-=1
        else:
            n//=10
    print(n)

if __name__ == "__main__":
    main()
