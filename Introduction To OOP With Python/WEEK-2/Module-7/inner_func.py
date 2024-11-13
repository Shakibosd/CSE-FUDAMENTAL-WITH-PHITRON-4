
def double_decker():
    print('Starting The Double Decker')
    def inner_fun():
        print('Inside The Inner')
        return 3000
    return inner_fun

# print(double_decker())
# print(double_decker()())

def do_something(work):
    print('Work Started')
    work()
    print('Work Ended')

# do_something(2)
# do_something('ami busy')
def coding():
    print('Coding In Python')

# do_something(coding)
def sleeping():
    print('Sleeping And Dreaming In Python')

do_something(sleeping)            