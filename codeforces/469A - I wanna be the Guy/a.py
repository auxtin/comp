def main():
    n = int(input().strip())
    p = set(map(int, input().split()[1:]))
    q = set(map(int, input().split()[1:]))
    print("I become the guy." if len(p | q) == n else "Oh, my keyboard!")
if __name__ == "__main__":
    main()