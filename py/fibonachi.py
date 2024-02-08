def fib_number(n):
    a=1
    b=1
    while a <= n:
        a=a+b
        print(a)
        b=b+a
        print(b)
    
fib_number(4)