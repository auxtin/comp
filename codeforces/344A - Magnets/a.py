def main():
    n = int(input())
    last = str(input())
    groups = 1
    for i in range(1,n):
        curr = str(input())
        if curr != last:
            groups+=1
            last = curr
    print(groups)

if __name__ == '__main__':
    main()