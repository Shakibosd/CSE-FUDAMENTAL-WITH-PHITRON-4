
#Approch 1
def double_it(num):
    result = num * 2
    print("inside the function.py file : ",result)
    return result

double_it(8)
double_it(88)

# Approch 2
def sum(num1,num2):
    res = num1 + num2
    return res

total = sum(22,34)
print("Total Value : ",total)

final = double_it(total)
print("The Final Value : ",final)
