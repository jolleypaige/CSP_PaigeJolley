# Paige Jolley, Financial Calculator Update Python

print("Welcome! This is a Financial Calculator.")

def info(cost, income, type):
    percent = cost/income *100
    print(f"Your {type} is ${cost:.2f} an which is {percent}% of your income.")

def money(bills):
    return float(input(f"What is your {bills}? "))

income = money("income")
rent = money("rent")
utilities = money("utilites")
groceries = money("groceries")
transportation = money("transportation")

savings = income*.1 

spending = income-savings-rent-utilities-groceries-transportation

info(rent, income, "rent")
info(utilities, income, "utilities")
info(groceries, income, "groceries")
info(transportation, income, "transportation")
info(savings, income, "savings")
info(spending, income, "spending")
