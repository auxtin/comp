def main(): 
    n = int(input().strip())
    a = list(map(int,input().split()))
    l = 0
    maxlength = 0
    for r in range(1,n):
        if a[r] < a[r-1]:
            maxlength = max(maxlength, r - l)
            l = r
    maxlength = max(maxlength, n - l)
    print(maxlength)
    
if __name__ == "__main__":
    main()
