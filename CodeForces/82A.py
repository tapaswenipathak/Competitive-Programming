names = ['Sheldon', 'Leonard', 'Penny', 'Rajesh', 'Howard']

n = int(raw_input()) - 1

pos = 5

while n >= pos :
    n -= pos
    pos *= 2
print names[n / (pos / 5)]
