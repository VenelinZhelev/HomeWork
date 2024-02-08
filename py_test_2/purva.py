class BankAccount:
    def __init__(him, owner, balance=0):
        him.owner = owner
        him.balance = balance

    def deposit(him, amount):
        him.balance =him.balance+amount

    def withdraw(him, amount):
        if amount > him.balance:
            print("Not enough money.You are broke.")
        else:
            him.balance =him.balance-amount
    def get_balance(him):
     return him.balance



account = BankAccount("Gosho Munchev", 1000)
account.deposit(500)
account.withdraw(2000)
print("After the first transaction:")
print(account.get_balance())

account.deposit(5000)
account.withdraw(300)

print("After the new transaction:")
print(account.get_balance())
