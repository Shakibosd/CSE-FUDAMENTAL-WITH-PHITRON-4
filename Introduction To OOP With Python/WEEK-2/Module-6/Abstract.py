

from abc import ABC, abstractmethod
#abstrace base class
class Animal(ABC):
    @abstractmethod #enforce all derived class to have a eat methode
    def eat(self):
        print('I Need Food')
    @abstractmethod    
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self, name) -> None:
        self.category = 'Monkey'
        self.name = name
        super().__init__()
        
    def eat(self):
        print('Hey na nana, i am eating banana')
    def move(self):
        print('Hanging on the branches') 

layka = Monkey('lucky')
layka.eat()        