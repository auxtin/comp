from collections import defaultdict
def main():
    a = str(input())
    b = str(input())
    c = str(input())
    char_dict =  defaultdict(int)
    if len(a) + len(b) != len(c):
        print("NO")
        return
    freq = defaultdict(int)
    for ch in a + b:
        freq[ch] += 1
    for ch in c:
        freq[ch] -= 1
        if freq[ch] < 0:
            print("NO")
            return
    print("YES")
if __name__ == "__main__":
    main()