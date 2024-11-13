

# 1. Create a Product class
class Product:
    def __init__(self, name, price):
        self.name = name
        self.price = price

# 2. Create a Shop class
class Shop:
    def __init__(self):
        self.products = []

    # Method to add products to the shop
    def add_product(self, product):
        self.products.append(product)
        print(f"{product.name} added to the shop.")

    # Method to buy a product from the shop
    def buy_product(self, product_name):
        for product in self.products:
            if product.name == product_name:
                print(f"Congratulations! You have bought {product.name}.")
                self.products.remove(product)
                return
        print(f"Sorry, {product_name} is not available in the shop.")

# Example usage:
# Create instances of Product and Shop
apple = Product("Apple", 1.50)
banana = Product("Banana", 0.75)
shop = Shop()

# Add products to the shop
shop.add_product(apple)
shop.add_product(banana)

# Buy a product from the shop
shop.buy_product("Apple")
shop.buy_product("Orange") 

