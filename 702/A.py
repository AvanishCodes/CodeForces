import math
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    additions = int(0)
    for i in range(0, n-1):
        maxNum = max(arr[i], arr[i+1])
        minNum = min(arr[i], arr[i+1])
        if(maxNum > 2*minNum):
            additions += math.floor(math.log2((maxNum-1)/minNum))

    print(additions)