def main():
    n,k,l,c,d,p,nl,np = map(int, input().split())
    total_vol = k * l
    max_drinks = total_vol // nl
    num_limes = c * d
    max_salt = p // np
    max_toast = min(max_drinks,num_limes,max_salt) // n
    print(max_toast)
if __name__ == '__main__':
    main()
