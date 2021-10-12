def main():
    a, b, k = map(int, input().split())
    '''
        a = Number of zeroes in operands
        b = Number of ones in operands
        k = number of ones in result
    '''
    if k >= a+b:
        print("NO")
        return
    # if len(x) > k
    # If there can be any leading zeroes
    if b == 1:
        if k == 0:
            print("YES")
            x = "1"*b + "0"*a
            y = x
            print(x)
            print(y)
            return
        # elif k == a-1:
        #     x = "1"+"0"*a
        #     y=1
        #     print(x)
        #     print(y)
        else:
            print("NO")

    if b > 1:
        if k>a:
            x = "1" + "0"*b
            y = "0" + "0"*(b-1) + "1"
            # Get the remaining number of 1s in start and others on back
            x = "1"*(b-1) + x + "1"*(k-a)
            y = "1"*(b-1) + y + "0"*(k-a)
            # print(x.count('1'))
            print(x)
            print(y)
            if x.count('0') == y.count('0') == a and x.count('1') == y.count('1') == b:
                print("YES")
                print(x)
                print(y)
                return
            else:
                print("NO")
                return
        else:
            # Set trailing k+1 bits of x
            x = "1" + "0"*k
            y = "0" + "0"*(k-1) + "1"
            # Get the remaining number of 1s in start and others on back
            x = "1"*(b-1) + x + "0"*(a-k)
            y = "1"*(b-1) + y + "0"*(a-k)
            # print(x.count('1'))
            if x.count('0') == y.count('0') == a and x.count('1') == y.count('1') == b:
                print("YES")
                print(x)
                print(y)
                return
            else:
                print("NO")
                return

main()