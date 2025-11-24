def distinct(year: int):
    s = str(year)
    return len(s) == len(set(s))
def main():
    y = int(input().strip())
    while True:
        y += 1
        if(distinct(y)):
            print(y)
            break

if __name__ == "__main__":
    main()