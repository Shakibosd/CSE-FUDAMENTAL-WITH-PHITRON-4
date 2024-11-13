

import math
import time
def timer(func):
    def inner(*args, **kwargs):
        print('time started')
        # print(func)
        start = time.time()
        func(*args, **kwargs)
        print('time ended')
        end = time.time()
        print(f'total time taken: {end-start}')
    return inner

# timer()() 

@timer
def get_factorial(n):
    print('factorial starting')
    res  = math.factorial(n)
    print(f'factorial of {n} is:',res)

get_factorial(n = 120)

#vejal way to decorate
# timer(get_factorial)()


 