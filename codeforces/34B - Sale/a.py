def main():
    _, m = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    res = 0
    for x in a:
        if x >= 0 or m == 0:
            break
        else:
            res = res + (-x)
        m -= 1
    print(res)

if __name__ ==  "__main__":
    main()

