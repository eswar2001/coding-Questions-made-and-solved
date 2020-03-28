def countDigit(n):
    c=0 
    while n>0:
        c+=1 
        n=n//10
    return c

t=int(input())
while t>0:
    t-=1 
    n=int(input())
    i=1
    if n>=1:
            n=n-1
    while n>0:
        i+=1
        if n>=countDigit(i):
            n=n-countDigit(i)
        else:
            break
    print(i)
