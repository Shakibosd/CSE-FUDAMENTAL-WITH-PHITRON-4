
class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print('vat mangos polau korma')
   
    def exercise(self):
        raise NotImplementedError
   
class Cricketer(Person):
    def __init__(self, name, age, height, weight, team) -> None:
        self.team = team
        super().__init__(name, age, height, weight)
    #override            
    def eat(self):
        print('vegetables')

    def exercise(self):
       print('gym e poisa diya hudai gham jorai')
    
    # + sign operator overload
    def __add__(self, other):
        return self.age + other.age   
    # * sign operator overload
    def __mul__(self, other):
        return self.weight * other.weight 
    # len sign operator overload
    def __len__(self):
        return self.height  
    # gt sign operator overload
    def __gt__(self, other):
        return self.age > other.age  
    
shakib = Cricketer('Shakib', 38, 68, 91, 'BD')
mushi =  Cricketer('Mushi', 36, 65, 78, 'BD')
# shakib.eat()        
# shakib.exercise()


print(54+67)
print('Sakib' + 'Rakib')
print([12,98] + [5,6,7,1,2])
print(shakib + mushi)
print(shakib * mushi)
print(len(shakib))
print(shakib > mushi)