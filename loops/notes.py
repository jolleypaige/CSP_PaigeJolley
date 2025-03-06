# Paige Jolley, Loop notes

# for loops 
nums = [12,3,66,7,3,3,2]

for num in nums:
    print(num)

# While loop
x =0

while x < 10:
    print(x)
    x += 1

# What are lists?
    nums = [1,2,3,4,5,6,7,6]
    siblings = ["Curtis","Mark","Eric","Amy","Creg"]
    print(nums)
    print(siblings[3])

    siblings[3] = "Amy"
    siblings.pop(5)
    siblings.insert(1, "Erin")
    siblings.insert(1, ["Mark", "Haley", "Shawn", "Maddy"])
    print(siblings)

# 5 How do you make lists in python?
    # step 1: use brackets
    # step 2: put in the items you want to be in the list
    # step 3: seperate each item with a coma

# 6. How do you make loops for python?
    for siblings in siblings:
        print(siblings)

    for x in range(1, 6, 2):
        print("Duck")

# How do you make while loop in python
    import random
    x = 1
    goose = random.ranint(1, 20)

    while x <= 20:
        if x == goose:
            print("Goose!")
            break
        else:
            print("Duck")
        x += 1


