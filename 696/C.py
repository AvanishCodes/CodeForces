def twoSum0(dicto):
    return

def makeDict(arr):
    ans = dict()
    for element in arr:
        ans[f"{element}"] = True
    return ans


if __name__ == "__main__":
    for _ in range(int(input())):
        n = int(input())
        arr = list(map(int, input().split()))
        arr.sort(reverse=True)
        myDict = makeDict(arr)
        # Just for testing out
        # print(myDict)

        # Pop out the largest element
        targetKeys = []
        targetKeys = [myDict.keys()[0]]
        for targetKey in targetKeys:
            del myDict[targetKey]
            continue
        