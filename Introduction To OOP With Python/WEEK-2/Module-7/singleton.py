
# UML-> Unified Modeling Language
# singleton --> one single instance
# if you want a new instance, you will get the old one (already created ) instance

class Signleton:
    __instance = None
    def __init__(self) -> None:
        if Signleton.__instance is None:
            Signleton.__instance = self
        else:
            raise Exception('This is Singleton. Already have an instance, use that one by calling get_instance method')
    @staticmethod    
    def get_instance():
        if Signleton.__instance is None:
            Signleton()
        return Signleton.__instance    

first = Signleton.get_instance()      
secoend = Signleton.get_instance()  
third = Signleton.get_instance()    
# last = Signleton().get_instance()   
print(first)
print(secoend)
print(third)
# print(last)