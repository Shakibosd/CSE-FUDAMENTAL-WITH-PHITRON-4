
class calculator:
    brand = "Casio Ms990"
    def add(self, num1, num2):
        addition = num1 + num2
        return addition

    def sub(self, num1, num2):
        subtraction = num1 - num2
        return subtraction
    
    def mul(self, num1, num2):
        multiplai = num1 * num2
        return multiplai
    
    def div(self, num1, num2):
        divide = num1 / num2
        return divide

resualt = calculator()

addition_resualt = resualt.add(10,20)
subtraction_resualt = resualt.sub(20,10)
multiplaction_resualt = resualt.mul(10,5)
diviction_resualt = resualt.div(50,5)

print("The Sum Is : ",addition_resualt)
print("The Sub Is : ",subtraction_resualt)
print("The Mul Is : ",multiplaction_resualt)
print("The Div Is : ",diviction_resualt)