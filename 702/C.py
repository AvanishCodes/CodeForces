
cubes = dict()
cuberoots = dict()

for i in range(1, 10001):
    cubes[i] = i*i*i
    cuberoots[i*i*i] = i
flag = False

# print(cubes.get(5000))
# print(cuberoots.get(5))
# print(cubes.get(1))
# print(cuberoots.get(27))
# print(cubes)
# print(cuberoots)

for _ in range(int(input())):
    flag = False
    n = int(input())
    for i in range(1, int(pow(n, 0.34))+1):
        if cubes.get(i) is not None:
            if n >= cubes[i]:
                if cuberoots.get(n - cubes[i]) is not None:
                    print("YES")
                    flag = True
                    break
                continue
    if not flag:
        print("NO")
        continue
    continue