
#static attribute (class attribute)
#static method @staticmethod
#class method @classmethod
class Shopping:
    cart = [] # class attribute # static attribute
    origin = 'China'

    def __init__(self, name, location) -> None:
        self.name = name
        self.location = location
         
    def puschase(self, item, price, amount):
        remaining = amount - price
        print(f'buying: {item} for price: {price} and remaining: {remaining}')  

    @staticmethod
    def multiply(a, b):
        res =  a*b
        print(res)

    @classmethod
    def hudai_dekhi(self, item):
        print(self.name)
        print('hudai dekhi kintu kinmu just ac er hawa khaite aschi',item)

basundara = Shopping('basu en dhara', 'not popular location')
# basundara.puschase('lungi', 500, 1000)
basundara.hudai_dekhi('lungi')
# Shopping.puschase('a', 2, 3, 3)           
Shopping.hudai_dekhi('Lungi')

Shopping.multiply(4,6) #static method

basundara.multiply(6,9)