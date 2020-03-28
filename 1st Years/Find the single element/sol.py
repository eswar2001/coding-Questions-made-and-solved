n,k=[int(x) for x in input().split()]
s=[int(x) for x in input().split()]
p=0
l=len(s)
while n>1:
    j=0
    while j<1:
        
        if s[p%l]!=-1:
            j+=1 
        p+=1
    j=0
    while j<k-1:
        if s[p%l]!=-1:
            j+=1
            s[p%l]=-1
            n-=1 
        if n==1:
            break
        p+=1 
    
for i in s:
    if i!=-1:
        print(i)
        break
    
            
        