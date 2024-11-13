

'''
1. Write what is meant by operator overloading and method overriding with examples.
Ans:- 
Operator Overloading and Method Overriding ->
Operator overloading: It refers to the ability to define custom behavior for operators (+, -, *, /, etc.) when applied to instances of a class. For example, you can define how the + operator works for instances of a custom class by implementing the __add__() method.অপারেটর ওভারলোডিং: এটি অপারেটরদের জন্য কাস্টম আচরণ সংজ্ঞায়িত করার ক্ষমতা বোঝায় (+, -, *, /, ইত্যাদি) যখন একটি ক্লাসের উদাহরণে প্রয়োগ করা হয়। উদাহরণস্বরূপ, আপনি __add__() পদ্ধতি প্রয়োগ করে একটি কাস্টম ক্লাসের উদাহরণের জন্য + অপারেটর কীভাবে কাজ করে তা নির্ধারণ করতে পারেন।
Method overriding: It occurs when a subclass provides a specific implementation of a method that is already defined in its superclass. This allows a subclass to provide its own behavior for a method inherited from its superclass. For example, you might override the __str__() method in a subclass to provide a custom string representation.মেথড ওভাররাইডিং: এটি ঘটে যখন একটি সাবক্লাস একটি পদ্ধতির একটি নির্দিষ্ট বাস্তবায়ন প্রদান করে যা ইতিমধ্যেই তার সুপারক্লাসে সংজ্ঞায়িত করা আছে। এটি একটি সাবক্লাসকে তার সুপারক্লাস থেকে উত্তরাধিকারসূত্রে প্রাপ্ত একটি পদ্ধতির জন্য নিজস্ব আচরণ প্রদান করতে দেয়। উদাহরণস্বরূপ, আপনি একটি কাস্টম স্ট্রিং উপস্থাপনা প্রদান করতে একটি সাবক্লাসে __str__() পদ্ধতিটি ওভাররাইড করতে পারেন।

2. Find out which of these players is older using the operator overloading.
Ans:
To find the older player using operator overloading, you can define a custom comparison method (__gt__()) in the Cricketer class. This method will compare the ages of two cricketers and return True if the age of the first cricketer is greater than the age of the second cricketer.
Here's how you can implement it:
class Cricketer(Person):
    def __init__(self, name, age, height, weight) -> None:
        super().__init__(name, age, height, weight)
    
    def __gt__(self, other):
        return self.age > other.age
    
oldest_player = max([sakib, musfiq, kamal, jack, kalam])
print("The oldest player is:", oldest_player.name)


3. Write down 4 differences between the class method and static method with proper examples.
Ans:
Class method:
A class method is a method that is bound to the class rather than its instances.
It can access and modify class-level variables.
It takes the class itself as the first parameter (cls conventionally).
Example
class MyClass:
    class_variable = 0
    
    @classmethod
    def class_method(cls):
        cls.class_variable += 1
        
MyClass.class_method()
print(MyClass.class_variable)  # Output: 1
 Static method:
A static method is a method that does not access or modify class or instance state.
It does not take the class or instance as a parameter.
It is mainly used for utility functions that are related to the class.
Example:
class MyClass:
    @staticmethod
    def static_method(x, y):
        return x + y
        
result = MyClass.static_method(3, 4)
print(result)  # Output: 7

4. Write what are getter and setter with proper examples
Ans:
Getter and Setter->
Getter: A getter is a method used to retrieve the value of a private attribute of a class.
Setter: A setter is a method used to set the value of a private attribute of a class.
Example
class MyClass:
    def __init__(self):
        self._my_variable = None
    
    def get_my_variable(self):
        return self._my_variable
    
    def set_my_variable(self, value):
        self._my_variable = value
        
obj = MyClass()
obj.set_my_variable(10)
print(obj.get_my_variable())  # Output: 10

5. Explain the difference between inheritance and composition with proper examples.
Ans:
Inheritance:
Inheritance is a mechanism where a class (subclass) inherits properties and behavior from another class (superclass).
It promotes code reuse and establishes a relationship between classes where one class is a specialized version of another.
Example: Cricketer class inheriting from Person class.
Composition:
Composition is a design technique where a class contains objects of other classes as members.
It allows creating more complex objects by combining simpler ones.
It promotes flexibility and loose coupling between classes.
Example:
class Engine:
    def start(self):
        print("Engine started")
    
class Car:
    def __init__(self):
        self.engine = Engine()
        
    def start_engine(self):
        self.engine.start()
        
my_car = Car()
my_car.start_engine()  # Output: Engine started
'''