
# Write the difference between List and Dictionary of Python
'''
List->

1. A list is a sequence of elements of any data type.
2. It is declared using square brackets [].
3. Lists can contain elements of different data types.
4. Lists are mutable, It means we can change their contents.

Dictionary->

1. A dictionary is a collection of key-value pairs.
2. It is declared using curly braces {} or with the dict() constructor.
3. Dictionaries consist of keys and associated values.
4. Dictionaries are mutable, so we can modify their key-value pairs.
'''

#args
def my_function(*args):
    for arg in args:
        print(arg)

my_function(1, 2, 3)

#kargs
def my_function(**kargs):
    for key, value in kargs.items():
        print(key, value)

my_function(a=1, b=2, c=3)

