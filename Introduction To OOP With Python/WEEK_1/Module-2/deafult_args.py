
def sum_all(num1,*args):
    print(args)
    sum = 0
    for num in args:
        print(num)
        sum = sum + num
    return sum

total = sum_all(99, 11, 5,67,89,10,200)
print("Total Sum : ",total)