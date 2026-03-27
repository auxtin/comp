def main():
    w1,h1,w2,h2 = map(int, input().split())
    bounded = (h1 + h2 + 2) * (w1 + 2)
    ship = w1*h1 + w2*h2
    notch = (w1 - w2) * h2
    ans = bounded - ship - notch 
    print(ans)
if __name__ == "__main__":
    main()
