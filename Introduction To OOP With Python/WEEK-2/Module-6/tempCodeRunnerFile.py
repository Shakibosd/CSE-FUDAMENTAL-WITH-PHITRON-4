class Company:
    def __init__(self, name, address) -> None:
        self.name = name
        self.address = address
        self.bus = []
        self.routs = []
        self.drivers = []
        self.counters = [] 
        self.manager = []
        self.supervisors = []
        self.fare = []

class Driver:
    def __init__(self, name, license, age) -> None:
        self.license = license
        self.name = name
        self.age = age

class Counter:
    def __init__(self, company) -> None:  
        self.company = company  
    def purchase_a_ticket(self, start, destination):
        self.start = start
        self.destination = destination

class Passenger:
    def __init__(self, name, age, ticket=None) -> None:  # Added default value for ticket
        self.name = name
        self.age = age
        self.ticket = ticket 

class Supervisor:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age

red_mia = Driver('a', '123', 32)

my_company = Company("My Company", "123 Main St")
my_counter = Counter(my_company)  
my_passenger = Passenger("John", 25)
my_supervisor = Supervisor("Alice", 30)


print("Company Details:")
print("Name:", my_company.name)
print("Address:", my_company.address)

print("\nDriver Details:")
print("Name:", red_mia.name)
print("License:", red_mia.license)
print("Age:", red_mia.age)

print("\nCounter Details:")
print("Company Name:", my_counter.company.name)

print("\nPassenger Details:")
print("Name:", my_passenger.name)
print("Age:", my_passenger.age)
print("Ticket:", my_passenger.ticket)

print("\nSupervisor Details:")
print("Name:", my_supervisor.name)
print("Age:", my_supervisor.age)