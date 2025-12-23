def main():
    n = int(input())
    hm = {'Tetrahedron':4,'Cube':6,'Octahedron':8,'Dodecahedron':12,'Icosahedron':20}
    ans = 0
    for _ in range(n):
        curr = str(input())
        ans += hm[curr]
    print(ans)
                              
                                    
if __name__ == "__main__":
    main()