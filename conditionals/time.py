# Paige Jolley, How to get the time of day, Python
import time

#first instance of time in programming
first_time = time.gmtime()
#print(first_time)

#current time in seconds
current = time.time()
#print(current) #seconds since Jan 1 1970

# Current date and time like we see it normally
now = time.ctime(current)
#print(now)

#Get just a part of the time
local_time = time.localtime(current)
day = local_time.tm_wday
hour = local_time.tm_hour
print(hour)