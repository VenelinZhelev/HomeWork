def is_number_balanced(n):
    sum=0
    sbor=0
    i=0
    j=0
    k=0
    sbor2=0
    max=0
    
    while n > 0:
        sum=sum+1
        n=n//10

       

    while i <= sum/2:
     sbor=sbor+n%10
     n=n//10
     i=i+1

    sum=sum/2

    if sum%2==1:
      sum=sum/2 + 1

    while j <= sum:
      j=j+1
      n=n//10
      max=n

    while k <= sum:
      sbor2=sbor2+n%10
      max=max//10
      k=k+1  
    
    if sbor2==sbor:
      print("Balanced")
    else:
      print("Not Balanced")

is_number_balanced(211)

