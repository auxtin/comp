def main():
    _ = int(input())
    a = (map(int, input().split()))
    officers = 0
    open_cases = 0
    for x in a:
        if x > 0:
            officers += x
        else:
            if officers > 0:
                officers -= 1
            else:
                open_cases +=1
    print(open_cases)
if __name__ == "__main__":
    main()