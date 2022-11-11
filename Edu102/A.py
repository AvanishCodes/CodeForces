for _ in range(int(input())):
    n, d = map(int, input().split())
    a = list(map(int, input().split()))
    flag = True
    for i in range(n):
        if a[i] > d:
            flag = False
    if flag == True:
        print("YES")
        continue
    # If changes are required
    a.sort()
    immature = a[0] + a[1]
    if immature <= d:
        print("YES")
    else:
        print("NO")