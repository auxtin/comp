def main():
    t = int(input())
    for _ in range(t):
        ok = False
        a, b, c = map(int, input().split())
        # b
        target = (a + c) // 2
        if (a + c) % 2 == 0 and target > 0 and target % b == 0:
            ok = True
        
        target = 2 * b - c
        if target > 0 and target % a == 0:
            ok = True
        target = 2 * b - a
        if target > 0 and target % c == 0: 
            ok = True
        print("YES" if ok else "NO")

if __name__ == "__main__":
    main()
