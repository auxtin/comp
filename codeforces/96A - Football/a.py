def main():
    s = str(input().strip())
    streak = 1
    prev = s[0]
    for v in s[1:]:
        if v == prev:
            streak += 1
            if streak >= 7:
                print("YES")
                return
        else:
            prev = v
            streak = 1
    print("NO")
if __name__ == "__main__":
    main()