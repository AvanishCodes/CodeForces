
# def find_lcm(num1, num2):
#     if(num1 > num2):
#         num = num1
#         den = num2
#     else:
#         num = num2
#         den = num1
#     rem = num % den
#     while(rem != 0):
#         num = den
#         den = rem
#         rem = num % den
#     gcd = den
#     lcm = int(int(num1 * num2)/int(gcd))
#     return lcm



# def main():
#     for _ in range(int(input())):
#         d = int(input())
        
#         divisors = []
#         start = 1
#         divisors = [1, 1+d, 1 + 2*d, 1 + 3*d]
#         res = 1
#         res = find_lcm(divisors[0], divisors[1])
#         res = find_lcm(res, divisors[2])
#         print(res)


# def precompute():
#     sieve = [True for i in range(2000010)]
#     sieve[0](None)
#     sieve[1](False)
#     sieve[2](True)
#     # print(sieve)
#     for i in range(3, 2000009, 2):
#         sieve[i] = False
    
    
#     return sieve

def get_primes(n):
    numbers = set(range(n, 1, -1))
    primes = []
    while numbers:
        p = numbers.pop()
        primes.append(p)
        numbers.difference_update(set(range(p*2, n+1, p)))
    return primes

if __name__ == "__main__":
    # sieve = precompute(2000010)
    # Testing only
    # print(get_primes(1000))
    sieve = get_primes(2000010)
    print(sieve)

    # main()