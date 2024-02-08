def to_number(digits):
    print("Lista:", digits)
    num =0

    for digit in digits:
          num=num*10 + digit
    print("Chislo", num)

to_number([1,2,3,9])