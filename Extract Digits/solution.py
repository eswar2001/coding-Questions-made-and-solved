s=input()
if s[0]=='-':
    print('-',end="")
for i in s:
    if i.isdigit() :
        print(i,end="")
