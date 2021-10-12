for _ in range(int(input())):
    p, a, b, c = map(int, input().split())
    t1 = ((a-(p%a))+a)%a
    t2 = ((b-(p%b))+b)%b
    t3 = ((c-(p%c))+c)%c
    ans = min(t1, t2, t3)
    print(ans)