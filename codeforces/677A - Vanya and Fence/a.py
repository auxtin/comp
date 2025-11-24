def main():
    _,h = map(int, input().split())
    a = list(map(int, input().split()))
    min_width = 0
    for height in a:
        if height > h:
            min_width+=2
        else:
            min_width+=1
    print(min_width)
        
if __name__ == "__main__":
    main()