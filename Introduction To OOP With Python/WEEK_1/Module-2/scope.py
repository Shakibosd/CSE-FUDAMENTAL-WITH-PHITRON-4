
balance = 3000

def buy_things(item, price):
    dream_phone = 'xphone'
    global balance
    print('prev balance val : ',balance)
    balance = balance - price
    print(f'balance after buying : {item}',balance)
buy_things('sunglass', 1000) 
print('global blance after buy : ',balance)   