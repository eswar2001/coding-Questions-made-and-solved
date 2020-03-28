t=int(input())
while t>0:
  t-=1
  l=input()
  f=0
  for i in range(len(l)-1):
    if int(l[i])+1!=int(l[i+1]) and int(l[i])-1!=int(l[i+1]):
      print("NO")
      f=1
      break
  if f==0:
    print("YES")
  

