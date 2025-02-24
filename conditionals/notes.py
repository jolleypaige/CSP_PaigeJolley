# Paige Jolley, Conitional Notes Python
name = input("What is your name?: \n")
# Q: What puts something inside of the “if” statement?
#           A: it's the little tab in the frount
#      if condition: then do this
if name == "LaRose": #  <= this is the condition
    print("Hi Ms. LaRose") #  <= This is what it does if true
else: # This happens if the condition is false
    print(f"Hello {name}!")

# Q: What do if statements do?
#       A: Checks a condition and if it is true it will do a thing

# Q: What are boolean statements?
#    A: True or False
if name == "LaRose": #  <= this is a boolean statement
    print("Hi Ms. LaRose") #  <= This is what it does if true
else: #if the boolean is false, the else statemet happens

# What do else statements do?

# What kind of statement do you use if you have more than 2 needed outcomes?
num = 2
# computers read top to bottom, check the least likely first
if num == 0: # <= if always starts the conditional
    print("There are none.")
elif num == 1: #everything inbetween should be elif
    print("There is one.")
elif num <4:
    print("There are couple.")
elif num < 10:
    print("There are few.")
else: # <= else always ends the conditionals
    print("There are many")

# What do each of the different symbols mean in conditionals?
# < Less than 
# > Greater than
# <= less than or equal to 
# >= greater than or equal to 
# == equal to
# === *doesn't exsis in python
# ! Not

# What are the 3 logical operators?
elif num < 10 and > 5:  # And means that bith booleans must be true
    print("This is a big single digit number")

elif num < 10 or > 5: # Or means one must be true
    print("This is a big single digit number")

elif not num < 10 : # Not changes o check if false
    print("This is a big single digit number")
# What are logical operators for?
#   A: Allows the code to handle more difficult questions... increases complexity

# What does a nested conditional statement do?
if num <10
    if num ==8:
        print("This print at 8")
    else:
        print("The number is less than 10")
else:
    print("The number is bigger than 10")


# How do you write an if statement in C?
# How do you write else statements in C?
# How do you write elif/ else if statements in C?
#How do you write the 3 logical operators in C?