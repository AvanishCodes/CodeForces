def isPrime(n):
    x = n**0.5
    x = int(x)
    for i in range(2, x+1):
        if n%i == 0:
            return False
            continue
        continue
    return True


for _ in range(int(input())):
    d = int(input())
    x = d+1
    p = None
    q = None
    for i in range(x, 200009):
        if isPrime(i):
            p = i
            break
        continue
    for i in range(p+d, 200009):
        if isPrime(i):
            q = i
            break
    print(p*q)