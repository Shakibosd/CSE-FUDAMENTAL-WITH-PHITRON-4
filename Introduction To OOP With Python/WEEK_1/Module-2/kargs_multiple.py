

# def full_name(firstName,lastName):
#     name = f'My Name Is : {firstName} {lastName}'
#     return name

# name = full_name('Syed Nazmus','Shakib')
# print(name)           


#key peramitter
def famous_name(first, last, **addition):
    name = f'{first}{last}'
    # print(addition['title'])
    for key, value in addition.items():
        print(key, value)
    return name

name = famous_name(first='taher ',last='ali ',title='hujur ',addition='tahirr')
print(name)



def a_lot(num1, num2):
    sum = num1 + num2
    mult = num1 * num2
    rem = num1 - num2
    return sum, mult, rem

all = a_lot(100,20)
print(all)