
from abc import ABC

class Vehicle(ABC):
    speed = {
        'Car' : 50,
        'Bike' : 60,
        'Cng' : 15
    }

    def __init__(self, vehicle_type, licence_plate, rate) -> None:
        self.vehicle_type = vehicle_type
        self.licence_plate = licence_plate
        self.rate = rate

class Car(Vehicle):
    def __init__(self, vehicle_type, licence_plate, rate) -> None:
        super().__init__(vehicle_type, licence_plate, rate)

class Bike(Vehicle):
    def __init__(self, vehicle_type, licence_plate, rate) -> None:
        super().__init__(vehicle_type, licence_plate, rate)

class CNG(Vehicle):
    def __init__(self, vehicle_type, licence_plate, rate) -> None:
        super().__init__(vehicle_type, licence_plate, rate)                