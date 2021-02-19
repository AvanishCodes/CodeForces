for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    summation = list()
    summation.append(arr[0] if arr[0] > 0 else 0)
    for i in range(1, n):
        # if(arr[i] > 0):
        summation.append(summation[i-1] + arr[i] if arr[i] > 0 else summation[i-1])
        continue
        # continue
    print(*summation)