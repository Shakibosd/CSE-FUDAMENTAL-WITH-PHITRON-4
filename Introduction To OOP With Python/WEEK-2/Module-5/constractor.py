
class phone:
     menufactured = 'China'

     #constractor
     def __init__(self, onwer, brand, price):
          self.onwer = onwer
          self.brand = brand
          self.price = price

     def send_sms(self,phone,sms):
          text = f'Sending To: {phone} {sms}'
          print(text)

my_phone = phone('kala chan', 'oppo', '9000')
print(my_phone.onwer, my_phone.brand, my_phone.price)     

her_phone = phone('sada chan', 'samsung', '9010')
print(her_phone.onwer, her_phone.brand, her_phone.price) 

dad_phone = phone('lal chan', 'iphone', '90200')
print(her_phone.onwer, her_phone.brand, her_phone.price)  