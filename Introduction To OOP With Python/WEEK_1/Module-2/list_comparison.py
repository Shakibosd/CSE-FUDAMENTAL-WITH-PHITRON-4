
numbers = [5,12,67,89,10,33,22,66]
odds=[]
for num in numbers:
    if num % 2 == 1 and num % 5 == 0:
        odds.append(num)

print(odds)
