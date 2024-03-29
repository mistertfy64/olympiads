import random

f = open("largest-island.in","w")
f.write("3000 3000\n")
for i in range(0,3000):
    for j in range(0,3000):
        if (random.random()>0.99):
            f.write('.')
        else:
            f.write('0')
    f.write("\n")
