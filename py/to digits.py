def to_digits(n):
    num=0
    while n > 0:
        num=n%10
        print(num)
        num=0
        n=n//10

to_digits(145)