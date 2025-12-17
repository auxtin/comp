def main():
    n = int(input().strip())
    for idx in range(n):
        print("I hate" if idx % 2 == 0 else "I love", end="")
        print(" it" if idx == n - 1 else " that ", end="")

if __name__ == "__main__":
    main()