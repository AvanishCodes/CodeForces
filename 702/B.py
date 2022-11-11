for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    c = {
        0: 0,
        1: 0,
        2: 0
    }
    for i in range(n):
        c[arr[i]%3] += 1
        continue

    c = dict(sorted(c.items(), key=lambda item: item[1]))
    print(c)
    myKeys = list(c.keys())
    if c[0] == c[1] == c[2]:
        print(0)
        continue
    moves = 0
    average = (c[0] + c[1] + c[2])//3
    if c[myKeys[2]] >= c[myKeys[0]] + 2:
        moves += min(average-c[myKeys[0]], c[myKeys[2]]-c[myKeys[0]])
        c[myKeys[0]] += moves
        c[myKeys[2]] -= moves
        if(c[myKeys[0]] == c[myKeys[1]] == c[myKeys[2]]):
            print(moves)
            continue
        else:
            print(moves+c[myKeys[2]]-c[myKeys[1]])