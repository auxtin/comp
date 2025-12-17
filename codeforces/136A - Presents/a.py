def main():
    n = int(input())
    # print(n)
    v = [0] * n
    for giver_idx, token in enumerate(input().split()):
        receiver = int(token)
        v[receiver - 1] = giver_idx + 1
    print(*v)
    return

if __name__ == "__main__":
    main()