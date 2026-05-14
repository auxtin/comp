def factor(n: int,f: int) -> tuple[int,int]:
    res = 0
    while n % f == 0:
        res += 1
        n = n // f
    return res, n
def main():
    t = int(input())
    for _ in range (t):
        n = int(input())
        a, n = factor(n,2)
        b, n = factor(n,3)
        if n != 1 or a > b:
            print(-1)
            continue
        print(2*b - a)

if __name__ == "__main__":
    main()
