def main():
    _ = int(input())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
    s = sum(a)
    running_sum = 0
    for idx, x in enumerate(a):
        running_sum += x
        if(2*running_sum > s):
            print(idx + 1)
            break
if __name__ == "__main__":
    main()
