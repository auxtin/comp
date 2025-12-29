def main():
    n = int(input())
    for _ in range(n):
        curr = str(input())
        if curr.lower() == "yes":
            print("YES")
        else:
            print("NO")
if __name__ =="__main__":
    main()