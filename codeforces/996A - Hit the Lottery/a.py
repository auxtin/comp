def main():
    n = int(input())
    ans = 0
    denoms = [100,20,10,5,1]
    for bill in denoms:
        ans += (n //bill)
        n %= bill
    print(ans)
if __name__ == "__main__":
    main()
