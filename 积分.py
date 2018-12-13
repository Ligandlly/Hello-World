from math import sin

from math import pi

def f(x):

    return sin(x)/x

def element(x):

    global step

    return f(x) * step

up = pi

low = 0

n = 100000

step = (up - low)/n

sum = 0

for i in range(1,n+1):

    sum += element(step * i)

print(sum)
