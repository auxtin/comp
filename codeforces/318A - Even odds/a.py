def main():
    n, k = map(int, input().split())
    odd = True
    if n % 2 == 0:
        odd = False
    num_odds = 0
    num_evens = 0
    if odd:
        num_evens = n // 2
        num_odds = num_evens + 1
    else:
        num_evens = num_odds = n // 2
    if k > num_odds:
        print(2* (k - num_odds))
    else:
        print(2*k - 1)
    
if __name__  == "__main__":
    main()
