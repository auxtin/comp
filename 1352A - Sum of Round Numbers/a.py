def main():
    n = int(input())
    for i in range(n):
        t = int(input())
        res = []
        place = 0
        while t > 0:
            digit = t % 10
            if digit != 0:
                res.append(digit * pow(10,place))
            t = t // 10
            place += 1
        print(len(res))
        print(*res)

    
if __name__ == "__main__":
    main()
