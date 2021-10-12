for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    newList = []
    i = n-1
    currentMax = n
    # currentMin = 
    # for i in range(n-1, -1):
    #     if currentMax == 
    minElement = n+1
    # for i in range(n-1, -1, -1):
    #     minElement = min(minElement, arr[i])
    numbers = 0
    endPoint = n
    myMap = dict()
    # for i in range(0, n):

    while endPoint > 0:
        for i in range(endPoint-1, -1, -1):
            if arr[i] == minElement-1:
                print(arr)
                newList += arr[i:endPoint]
                # arr = arr[:i-1]
                endPoint = i-1
            minElement = min(minElement, arr[i])
            print(f"Minimum element till now: {minElement}")
            print(*newList)
    print(*newList)