for _ in range(int(input())):
    n = int(input())    # Number of bulbs
    string = "989"
    string += "0123456789"*100009
    print(string[:n])