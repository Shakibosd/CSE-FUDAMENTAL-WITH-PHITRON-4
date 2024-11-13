
class shop:
    shopping_mall = 'jamuna'
    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = []

    def add_to_cart(self, item):
        self.cart.append(item)     


rakib = shop('ra kibs')
rakib.add_to_cart('shoes')
rakib.add_to_cart('phone')
print(rakib.cart)           
        
niso = shop('ni sos')
niso.add_to_cart('cap')
niso.add_to_cart('watch')
print(niso.cart)        

auprbo = shop('auprbo')
auprbo.add_to_cart('chiruni')
print(auprbo.cart)        