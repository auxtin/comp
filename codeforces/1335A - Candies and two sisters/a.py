def main():
    t = int(input())
    while t:
       n = int(input()) 
       print(0 if n < 3 else (n - 1) // 2)
       t -= 1
if __name__ == "__main__":
    main()