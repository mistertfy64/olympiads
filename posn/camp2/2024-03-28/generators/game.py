import random

f = open("game.in","w")
f.write("10000\n")
for _ in range(0,10000):
    f.write(str(random.randint(1,10**9)) + " ")
