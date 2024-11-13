
#connection database mysql
import mysql.connector

mydbconnection = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "password"
)

print(mydbconnection)

#connection er ekta cursor
db_name = "python_test_db"
mycursor = mydbconnection.cursor()

#database create execute
sqlsalary = "CREATE DATABASE " + db_name
mycursor.execute(sqlsalary)