# Paige Jolley, Time of day Python
import time

current = time.time()

now = time.ctime(current)

local_time = time.localtime(current)
day = local_time.tm_wday
hour = local_time.tm_hour
print(hour)

if hour <= 12: 
    print("Good Morning!\n")
elif hour >= 13:
    print("Good Afternoon!\n")
elif hour >= 18: 
    print("Good Evening!\n")
else: 
    print("It is night.\n")