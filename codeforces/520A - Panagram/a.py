def bitmask(s: str):
    mask = 0
    for c in s:
        if 'a' <= c <= 'z':
            bit = ord(c) - ord('a')
            mask |= (1 << bit)
    all = (1 << 26) - 1       
    print("YES" if all == mask else "NO")
def use_set(s: str):
    print("YES" if len(set(s)) == 26 else "NO")
def use_seen(s: str):
    seen = [False] * 26
    for c in s:
        if 'a' <= c <= 'z':
            seen[ord(c) - ord('a')] = True
    print("YES" if all(seen) else "NO")
    

def main():
    _ = input().strip()
    s = input().strip().lower()
    bitmask(s)
    # use_set(s)
    # use_seen(s)
if __name__ == "__main__":
    main()