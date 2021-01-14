def lcm(x, y):
    if x > y:
        z = x
    else:
        z = y

    while(True):
        if((z % x == 0) and (z % y == 0)):
            lcm = z
            break
        z += 1

    return lcm


# print(lcm(4, 6))
# print(lcm(15, 17))


# for _ in range(int(input())):
#     s = input()
#     t = input()
#     # Check if only a exists in s
#     sFlagA = True if 'b' not in s
#     sFlagB = True if 'a' not in s
#     tFlagA = True if 'b' not in t
#     tFlagB = True if 'a' not in t
#     flag = False
#     if sFlagA and tFlagA:
#         x = lcm(len(s), len(t))
#         string = s*20
#         print(string[:x])
#         flag = True
#     if sFlagB and tFlagB:
#         x = lcm(len(s), len(t))
#         string = s*20
#         print(s[:x])
#         flag = True
#     if not flag:


for _ in range(int(input())):
    s = input()
    t = input()
    # Get that who has more length
    mL = None
    if len(s) > len(t):
        mL = 's'
    elif len(t) > len(s):
        mL = 't'
    else:
        mL = None
    idealLength = lcm(len(s), len(t))
    s *= 400
    t *= 400
    s2 = s[:idealLength]
    t2 = t[:idealLength]
    if s2 == t2:
        print(s2)
        continue
    print('-1')