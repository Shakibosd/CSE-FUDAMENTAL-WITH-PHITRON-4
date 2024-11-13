
# from Bank import Bank
# bank = Bank("Islami Bank")

from datetime import datetime
class Bank:
    def __init__(self, name):
        self.name = name
        self.fund = 50000
        self.users = []
        self.admins = {}
        self.loan_feature_enabled = True

    def check_total_balance(self):
        total_balance = 0
        for user in self.users:
            total_balance += user.balance
        print('Total Available Balance:', total_balance)    

    def add_user(self, user):
        user.account_number = f'{user.name}00{len(self.users)+1}'
        self.users.append(user)

    def delete_user(self, user):
        self.users.remove(user)

    def add_admin(self, admin, password):
        self.admins[admin.name] = {'password': password, 'loan_enabled': True}

    def display_users(self):
        print('-----------Users-------------')
        for user in self.users:
            print(user.name, user.account_number)

    def display_balance(self):
        print('-------Bank Balance--------')
        print('Total Fund:', self.fund)

    def display_admins(self):
        print('-----------Admins-------------')
        for admin, data in self.admins.items():
            print(admin, data)

    def check_total_loan_amount(self):
        total_loan_amount = 0
        for user in self.users:
            total_loan_amount += user.total_loan
        print('Total Loan Amount : ', total_loan_amount)

    def toggle_loan_feature(self):
        if self.loan_feature_enabled:
            self.loan_feature_enabled = False
            print('Loan feature is now disabled')
        else:
            self.loan_feature_enabled = True
            print('Loan feature is now enabled')
class Person:
    def __init__(self, name, email, address):
        self.name = name
        self.email = email
        self.address = address
class User(Person):
    def __init__(self, name, email, address, account_type):
        super().__init__(name, email, address)
        if account_type in ['Savings', 'Current']:
            self.account_type = account_type
            self.balance = 0
            self.transaction_history = []
            self.total_loan = 0

    def create_account(self, bank):
        bank.add_user(self)

    def deposit(self, amount):
        self.balance += amount
        self.transaction_history.append(f"Deposit : {amount}")

    def withdraw(self, amount):
        if amount > self.balance:
            print('Withdrawal amount exceeded')
        else:
            self.balance -= amount
            self.transaction_history.append(f"Withdrawal : {amount}")

    def check_balance(self):
        print('Available Balance:', self.balance)

    def check_transaction_history(self):
        print('Transaction History:')
        for transaction in self.transaction_history:
            print(transaction)

    def take_loan(self, amount, bank):
        if self.total_loan < 2 and bank.loan_feature_enabled:
            if amount <= bank.fund:
                self.total_loan += amount
                self.balance += amount
                bank.fund -= amount
                self.transaction_history.append(f"Loan: {amount}")
                print('Loan granted successfully!')
            else:
                print('Insufficient funds in the bank to provide a loan.')
        else:
            print('You have already taken 2 loans or loan feature is disabled.')

    def transfer_amount(self, recipient, amount, bank):
        if amount <= self.balance:
            if recipient in bank.users:
                self.balance -= amount
                recipient.balance += amount
                self.transaction_history.append(
                    f"Transfer: -{amount} to {recipient.name}")
                print('Transfer successful!')
            else:
                print('Recipient account does not exist.')
        else:
            print('Insufficient funds for the transfer.')
class Admin(Person):
    def __init__(self, name, email, address):
        super().__init__(name, email, address)

    def delete_user_account(self, user, bank):
        if user in bank.users:
            bank.delete_user(user)
            print(f"User account for {user.name} deleted successfully.")
        else:
            print("User not found.")

    def check_total_balance(self, bank):
        total_balance = 0
        for user in bank.users:
            total_balance += user.balance
        print('Total Available Balance : ', total_balance)

    def toggle_loan_feature(self, bank):
        bank.toggle_loan_feature()

def create_user():
    name = input("Enter your name : ")
    email = input("Enter your email : ")
    address = input("Enter your address : ")
    account_type = input("Enter account type (Savings/Current) : ")

    return User(name, email, address, account_type)


def create_admin():
    name = input("Enter your name: ")
    email = input("Enter your email: ")
    address = input("Enter your address: ")

    return Admin(name, email, address)

def user_menu(user, bank):
    while True:
        print("User Menu:")
        print("1. Deposit Money")
        print("2. Withdraw Money")
        print("3. Check Balance")
        print("4. Check Transaction History")
        print("5. Take Loan")
        print("6. Transfer Money")
        print("7. Back to Main Menu")

        user_choice = input("Enter your choice : ")

        if user_choice == '1':
            amount = float(input("Enter the amount to deposit : "))
            user.deposit(amount)
        elif user_choice == '2':
            amount = float(input("Enter the amount to withdraw : "))
            user.withdraw(amount)
        elif user_choice == '3':
            user.check_balance()
        elif user_choice == '4':
            user.check_transaction_history()
        elif user_choice == '5':
            amount = float(input("Enter the loan amount : "))
            user.take_loan(amount, bank)
        elif user_choice == '6':
            recipient_name = input("Enter the recipient's name : ")
            recipient = None
            for u in bank.users:
                if u.name == recipient_name:
                    recipient = u
                    break
            if recipient:
                amount = float(input("Enter the amount to transfer : "))
                user.transfer_amount(recipient, amount, bank)
            else:
                print("Recipient not found.")
        elif user_choice == '7':
            print("Returning to the main menu.")
            break
        else:
            print("Invalid choice. Please try again.")


def admin_menu(admin, bank):
    while True:
        print("Admin Menu:")
        print("1. Delete User Account")
        print("2. Check Total Available Balance")
        print("3. Check Total Loan Amount")
        print("4. Toggle Loan Feature")
        print("5. Display Users")
        print("6. Back to Main Menu")

        admin_choice = input("Enter Your Choice : ")

        if admin_choice == '1':
            user_name = input("Enter The Name Of The User To Delete : ")
            user_to_delete = None
            for u in bank.users:
                if u.name == user_name:
                    user_to_delete = u
                    break
            if user_to_delete:
                admin.delete_user_account(user_to_delete, bank)
            else:
                print("User not found.")
        elif admin_choice == '2':
            bank.check_total_balance()
        elif admin_choice == '3':
            bank.check_total_loan_amount()
        elif admin_choice == '4':
            bank.toggle_loan_feature()
        elif admin_choice == '5':
            bank.display_users()
        elif admin_choice == '6':
            print("Returning to the main menu.")
            break
        else:
            print("Invalid choice. Please try again.")


def main():
    ab = Bank("AB Bank")

    print("-----Welcome To The Bank-----\n")

    while True:
        print("Select Any Option -> ")
        print("1. Create User Account")
        print("2. Create Admin Account")
        print("3. Exit")

        choice = input("Enter Your Choice 1/2 And Exit Option 3 : ")

        if choice == '1':
            user = create_user()
            user.create_account(ab)
            print(f"User account for {user.name} created successfully.")
            user_menu(user, ab)

        elif choice == '2':
            admin = create_admin()
            password = int(input("Enter admin password : "))
            ab.add_admin(admin, password)
            print(f"Admin account for {admin.name} created successfully.")
            admin_menu(admin, ab)

        elif choice == '3':
            print("Exiting the program.")
            break
    
        else:
            print("Invalid choice. Please try again.")

if __name__ == '__main__':
    main()
