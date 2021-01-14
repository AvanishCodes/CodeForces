n = int(input())
a = list()
b = list()
for i in range(n):
    ai,  bi = map(int, input().split())
    a.append(ai)
    b.append(bi)
res = [1 for i in range(sum(a) + sum(b) + 1)] 
resLen = [1 for i in range(sum(a) + sum(b) + 1)]
# print(res)
curIndex = 0
for i in range(n):
    while a[i] > 0:
        resLen[curIndex+1] = resLen[curIndex] + 1
        curIndex += 1
        a[i] -= 1
    while b[i] > 0:
        resLen[curIndex+1] = resLen[curIndex] - 1
        curIndex += 1
        b[i] -= 1
# print(resLen)
i = 0
tempArray = [1]
# resArray = [[] for j in range(len(res))]
# for i in range(len(res)):
#     tempArray[i] = [0 for j in range(resLen[i])]
# print(*resArray)
# for i in range(len(res)):
#     print(resArray[i])
# resArray[0][0] = 1
for i in range(1, len(resLen)):
    tempArray2 = [0 for j in range(resLen[i])]
    if resLen[i] > resLen[i-1]:
        tempArray2[0] = tempArray2[-1] = tempArray[0]
        for j in range(1, resLen[i]-1):
            tempArray2[j] = tempArray[j-1] + tempArray[j]
    else:
        for j in range(resLen[i]):
            tempArray2[j] = tempArray[j] + tempArray[j+1]
    tempArray = tempArray2
    ans = sum(tempArray)%998244353

# print(resArray)
print(ans%998244353)