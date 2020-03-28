t = int(input())
while t:
    t -= 1
    n = bin(int(input()))[2:]
    n = n[::-1]
    print(int(n, 2))
