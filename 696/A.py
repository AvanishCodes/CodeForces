def computeMaxString(a, n):
    ans = []
    # if b[0] == '1':
    #     ans.append(2)
    # ans[0] = 1
    ans.append(1)
    # ans.append(a[0]+1)
    a[0] += ans[0]
    for i in range(1, n):
        ans.append(None)
        if a[i]+1 != a[i-1]:
            ans[i] = 1
            a[i] += 1
        else:
            ans[i] = 0
    return ans



for _ in range(int(input())):
    n = int(input())
    b = input()
    separatedString = []
    # Separate out the digits of b
    for character in b:
        separatedString.append(int(character))
        
    maxString = computeMaxString(separatedString, n)
    print(*maxString, sep='')