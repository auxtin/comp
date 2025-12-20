def main():
    n = int(input().strip())
    a = list(map(int, input().split()))
    low = 100
    low_idx = 0
    high = 0
    high_idx = 0
    for idx, x in enumerate(a):
        if x <= low:
            low = x
            low_idx = idx
        if x > high:
            high = x
            high_idx = idx
    timeNeeded = n - 1 - low_idx + high_idx
    if high_idx > low_idx:
        timeNeeded-=1
    print(timeNeeded)
if __name__ == "__main__":
    main()