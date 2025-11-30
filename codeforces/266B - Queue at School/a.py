def main():
    n,t = map(int, input().split())
    a = list(input())
    for i in range(0,t):
        j = 0
        while j < n -1:
            if(a[j] == 'B' and a[j+1] == 'G'):
                a[j], a[j+1] = a[j+1], a[j]
                j+=2
            else:
                j+=1
    print(''.join(a))

if __name__ == "__main__":
    main()