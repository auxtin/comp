def main():
    n = int(input().strip())
    for idx in range(n):
        a, b = map(int, input().split())
        print(0 if a% b == 0 else (b - a % b))
if __name__ == "__main__":
    main()