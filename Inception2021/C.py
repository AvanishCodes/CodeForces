def getresult(i, k):
    res = abs(i-k)
    if res == 0 or res%15 == 0:
        return 0 
    if abs(i-k)%3 == 0:
        return 1
    if abs(i-k)%5 == 0:
        return -1
    return 0

for _ in range(int(input())):
    n = int(input())
    res = 0
    x, y = map(int, input().split())
    i = list(map(int, input().split()))
    k = list(map(int, input().split()))
    K = I = 0
    for j in range(n):
        # print(i[j%k])
        result = getresult(i[j%x], k[j%y])
        if result == 1:
            I += 1
        if result == -1:
            K += 1
        # print(result)
        continue
    print(abs(I-K))