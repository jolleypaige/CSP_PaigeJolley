# Paige Jolley, Financial Calculator Python

# print stament that welcomes user and tells what the program does
print("Welcome! This is a Financial Calculator.")

# ask what their income is (variable and input)
income = float(input("What is your income?\n"))

# ask what their rent is (variable and input)
rent = float(input("What is your rent? \n"))

# ask what their utilities is (variable and input)
utilities = float(input("What is your utility bills? \n"))

# ask what their groceries is (variable and input)
groceries = float(input("What is the cost of your groceries? \n"))

# ask what their trasportation is (variable and input)
transportation = float(input("What is your trasportation cost? \n"))

# calculate savings as 10% of income (income*.1) (variable)
savings = income*.1 

# calculate spending as income-savins-rent-untilites-groceries-transportation (variable)
spending = income-savings-rent-utilities-groceries-transportation

# calculate percent income of rent (rent/income *100) (variable)
percent_income_of_rent = rent/income *100

# calculate percent income of utilites (utilities/income *100) (variable)
percent_income_of_utilites = utilities/income *100

# calculate percent income of groceries (groceries/income *100) (variable)
percent_income_of_groceries = groceries/income *100

# calculate percent income of transporation (transportation/income *100) (variable)
percent_income_of_transportation = transportation/income *100

# calculate percent income of spending (spending/income *100) (variable)
percent_income_of_spending = spending/income *100

# Your rent is $XX.XX and which is XX% of your income. (print)
print(f"Your rent is {rent} an which is {percent_income_of_rent} % of your income. \n")

# Your utilities is $XX.XX and which is XX% of your income. (print)
print(f"Your utilities is {utilities} and which is {percent_income_of_utilites} % of your income. \n")

# Your groceries is $XX.XX and which is XX% of your income. (print)
print(f"Your groceries is {groceries} and which is {percent_income_of_groceries} % of your income. \n")

# Your transportation is $XX.XX and which is XX% of your income. (print)
print(f"Your transportation is {transportation} and which is {percent_income_of_transportation} % of your income. \n")

# Your savings is $XX.XX and which is XX% of your income. (print)
print(f"Your savings is {savings} and which is {savings} % of your income. \n")

# Your spending is $XX.XX and which is XX% of your income. (print)
print(f"Your spendings is {spending} and which is {percent_income_of_spending}% of your income. \n")