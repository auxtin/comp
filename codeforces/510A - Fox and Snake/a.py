def main():
    n,m = map(int, input().split())
    for idx in range(n):
        if idx % 2 == 0:
            print('#' * m)
        elif (idx // 2 % 2) == 0:
            print('.' * (m-1) + '#')
        else:
            print('#' + ('.' * (m-1)))

if __name__ == "__main__":
    main()