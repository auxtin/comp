def main():
    a = sorted(list(map(int, input().split())))
    print(a[-1] - a[0])
if __name__ == "__main__":
    main()