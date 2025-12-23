from collections import defaultdict
def main():
    n = int(input())
    home = []
    away = defaultdict(int)
    for _ in range(n):
        h, a = map(int, input().split())
        home.append(h)
        away[a]+=1
    clash = 0
    for i in home:
        clash += away[i]
    print(clash)
if __name__ == "__main__":
    main()