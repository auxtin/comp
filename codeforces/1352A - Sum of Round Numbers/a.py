def main():
    t = int(input())
    while t > 0:
        n = int(input())
        round_numbers = [] 
        place = 1
        while n > 0:
            digit = n % 10
            if(digit != 0):
                round_numbers.append(digit * place)
            n //= 10 
            place *= 10
        print(len(round_numbers))
        print(*round_numbers)
        t -=1


if __name__ == "__main__":
    main()