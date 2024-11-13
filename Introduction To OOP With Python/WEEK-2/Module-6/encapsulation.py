

#encapsulation --> hide details
# access modifier: public, protected, privet
class Bank:
    def __init__(self, holder_name, initial_deposit) -> None:
        self.holder_name = holder_name#public attribute
        self._branch = 'bonani 11'#protected
        self.__balance = initial_deposit#privete

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance    
       
    def withdrow(self, amount):
        if amount < self.__balance:
            self.__balance = self.__balance - amount
            return amount
        else:
            return f'Forkira taka nai'

rafsun = Bank('Choooto Bro', 10000)

print(rafsun.holder_name)
rafsun.holder_name = 'boro vai'
rafsun.deposit(40000)
print(rafsun.get_balance())
# print(rafsun._branch)
# print(dir(rafsun))
print(rafsun._Bank__balance)
