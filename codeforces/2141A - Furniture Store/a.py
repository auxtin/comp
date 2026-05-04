def main():
    t = int(input())
    for _ in range(t):
        _ = int(input())
        sofas = list(map(int, input().split()))
        min_so_far = sofas[0]
        overpriced = []
        for i, price in enumerate(sofas[1:],2):
            if price > min_so_far:
                overpriced.append(i)
            else:
                min_so_far = price
        print(len(overpriced))
        print(' '.join(map(str, overpriced)))

if __name__ == "__main__":
    main()
