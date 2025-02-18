# Paige Jolley, Functions Notes Python

# functions hold actions to be resused
#number = int(input("Please tell me a number: \n"))
def add(numOne, numTwo): # parameters set the name of the variable (just for the function)
    return numOne + numTwo

#add(number,12) #arguments set the value of the variable just for that instance of the function
#add(6,4)
#add(11, 10000)
#add(87, 3)

def values(type):
    return input(f"Please give me a {type}: \n")

name = values("name")
place = values("place")
verb = values("verb (past tense)")

print(f"{name} was really fast getting to {place} because they {verb} the whole way there.")