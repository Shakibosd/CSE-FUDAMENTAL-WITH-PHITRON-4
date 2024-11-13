class User:
    def __init__(self, email, password):
        self.email = email
        self.password = password

class Customer(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        self.cart = []

    def add_to_cart(self, product):
        self.cart.append(product)

class Seller(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        self.products = []

    def add_product(self, product):
        self.products.append(product)

class Product:
    def __init__(self, name, price, stock):
        self.name = name
        self.price = price
        self.stock = stock

class Order:
    def __init__(self, customer, products):
        self.customer = customer
        self.products = products

class EShoppingApp:
    def __init__(self):
        self.customers = []
        self.sellers = []
        self.products = []

    def create_customer_account(self, email, password):
        customer = Customer(email, password)
        self.customers.append(customer)

    def create_seller_account(self, email, password):
        seller = Seller(email, password)
        self.sellers.append(seller)

    def add_product(self, seller, product):
        if seller in self.sellers:
            seller.add_product(product)
            self.products.append(product)
        else:
            print("Seller Not Found.")

    def view_products(self):
        print("Available Products : ")
        for product in self.products:
            print(f"Name : {product.name}, Price : {product.price}, Stock : {product.stock}")

    def place_order(self, customer):
        if customer in self.customers:
            if customer.cart:
                total_price = sum(product.price for product in customer.cart)
                print(f"Total Price Of Your Order : ${total_price}")
                confirm = input("Confirm Order (Yes/No): ").lower()
                if confirm == "yes":
                    for product in customer.cart:
                        if product.stock > 0:
                            product.stock -= 1
                    customer.cart.clear()
                    print("Order Placed Successfully!!!")
                else:
                    print("Order Cancelled.")
            else:
                print("Your Cart Is Empty.")
        else:
            print("Customer Not Found.")
app = EShoppingApp()

while True:
    print("\n1. Create Customer Account")
    print("2. Create Seller Account")
    print("3. Add Product")
    print("4. View Products")
    print("5. Exit")

    choice = input("Enter Your Choice : ")

    if choice == '1':
        email = input("Enter Email : ")
        password = input("Enter Password : ")
        app.create_customer_account(email, password)
        print("Customer Account Created Successfully!!!")

    elif choice == '2':
        email = input("Enter Email : ")
        password = input("Enter Password : ")
        app.create_seller_account(email, password)
        print("Seller Account Created Successfully!!!")

    elif choice == '3':
        if not app.sellers:
            print("No Sellers Available. Please Create A Seller Account First.")
            continue
        name = input("Enter Product Name : ")
        price = float(input("Enter Product Price : "))
        stock = int(input("Enter Product Stock : "))
        product = Product(name, price, stock)
        app.add_product(app.sellers[0], product)
        print("Product Added Successfully!!!")

    elif choice == '4':
        app.view_products()

    elif choice == '5':
        print("Program Exiting!!!")
        break

    else:
        print("Invalid Choice. Please Try Again.")
