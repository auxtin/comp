def main():
    a = input().strip()
    b = input().strip()
    res = []
    for i,j in zip(a,b):
        res.append("1" if i != j else "0")
    print("".join(res))
if __name__ == "__main__":
    main()