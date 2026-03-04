def main():
    _,b,c = list(map(int,input().split()))
    _ = int(input())
    count = 0
    for x in map(int,input().split()):
        if b < x < c:
            count+=1
    print(count)
    
if __name__ == "__main__":
    main()
