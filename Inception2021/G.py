# MAX_NUM = 10**5+10
MAX_NUM = 300009
h = [[0, 0] for i in range(MAX_NUM)] # 0 for red velvet and 1 for blue berry
v = [[0, 0] for i in range(MAX_NUM)] # 0 for red velvet and 1 for blue berry
# print(h)
# print(v)
for _ in range(int(input())):
    x, y = map(int, input().split())
    # if _ == 1
    # print(h[x][0], h[x][1])
    # print(v[y][0], v[y][1])
    # If there is no difference in red velvet cakes and blue berry cakes, place a red velvel cake
    if h[x][0] - h[x][1] == 0 and v[y][0] - v[y][1] == 0:
        h[x][0] += 1
        v[y][0] += 1
        print('r', sep='', end='')
        continue    # do not run for this loop is the cake is placed

    # If there is already a red velvet cake in the same row
    if(h[x][0] - h[x][1] == 1):
        h[x][1] += 1
        v[y][1] += 1
        print('b', sep='', end='')
        continue


    # Place a rv cake if there is already a bb cake in the same row
    if(h[x][1] - h[x][0] == 1):
        h[x][0] += 1
        v[y][0] += 1
        print('r', sep='', end='')
        continue
    
    if(v[y][1] - v[y][0] == 1):
        h[x][0] += 1
        v[y][0] += 1
        print('r', sep='', end='')
        continue
    
    if(v[y][0] - v[y][1] == 1):
        h[x][1] += 1
        v[y][1] += 1
        print('b', sep='', end='')
        continue
    # print(*h[1:_+2])    
    # print(*v[1:_+2])