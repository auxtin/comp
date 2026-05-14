def main():
    n,_ = map(int,input().split())
    f = list(map(int,input().split()))
    f.sort()
    min_diff = float('inf')
    start = 0
    end = n
    while end <= len(f):
        min_diff = min(min_diff, f[end - 1] - f[start])
        start += 1
        end += 1
    print(min_diff)

if __name__ == "__main__":
    main()
