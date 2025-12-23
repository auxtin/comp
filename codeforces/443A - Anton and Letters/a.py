def main():
    s = str(input())
    st = set()
    for c in s:
       if 'a' <= c <= 'z':
          st.add(c)
    print(len(st))

if __name__ == "__main__":
    main()