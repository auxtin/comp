def main():
    s = input().strip()
    t = input().strip()
    if len(s) != len(t):
        print("NO")
        return
    if s == t[::-1]:
        print("YES")
    else:
        print("NO")



if __name__ == "__main__":
    main()