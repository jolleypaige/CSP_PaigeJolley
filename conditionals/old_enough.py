# Paige Jolley, Old Enough Python

age = float(input("How old are you? \n"))

if age == 15: # <= if always starts the conditional
    print("You can get a learners permit.\n")
elif age == 16: #everything inbetween should be elif
    print("You can drive.\n")
elif age >= 18:
    print("You can vote.\n")
elif age >= 6:
    print("You can go to school\n")
else: # <= else always ends the conditionals
    print("You are young.\n")