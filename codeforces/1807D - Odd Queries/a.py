def main():
    t = int(input().strip())
    for i in range(t):
        _, q = map(int, input().split())
        a = list(map(int, input().split()))
        # prefix array
        p = [0]
        for value in a:
            p.append(value + p[-1])
        for j in range(q):
            l, r, k = map(int, input().split())
            l_sum =  p[l-1]
            r_sum =  p[-1] - p[r]
            total_sum = l_sum + k * (r - l +1) + r_sum
            #print(total_sum)
            if total_sum % 2 != 0:
                print("YES")
            else:
                print("NO")

if __name__ == "__main__":
    main()
