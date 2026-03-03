def main():
    _,_,b = map(int,input().split())
    h = list(map(int,input().split()))
    h.sort()
    print(h[b] - h[b-1])

if __name__ == "__main__":
    main()
