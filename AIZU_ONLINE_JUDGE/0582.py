import sys

sum = 0
rig = 0
acu = 0
obt = 0

for line in sys.stdin:
    a, b, c = map(int, line.split())
    list = [a, b, c]
    list.sort()
    if (list[0] + list[1] > list[2]):
        sum += 1
        if (list[0] ** 2 + list[1] ** 2 == list[2] ** 2):
            rig += 1
        elif (list[0] ** 2 + list[1] ** 2 > list[2] ** 2):
            acu += 1
        elif (list[0] ** 2 + list[1] ** 2 < list[2] ** 2):
            obt += 1
    else:
        break

print(str(sum), str(rig), str(acu), str(obt))