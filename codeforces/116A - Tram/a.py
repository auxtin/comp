def main():
    n = int(input().strip())
    max_capacity = 0
    run_sum = 0
    for _ in range(n):
        a,b = map(int, input().split())
        run_sum = run_sum - a + b
        max_capacity = max(max_capacity,run_sum)
    print(max_capacity)

if __name__ == "__main__":
    main()