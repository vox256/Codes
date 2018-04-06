data = input().split()
W = int(data[0])
H = int(data[1])
x = int(data[2])
y = int(data[3])
r = int(data[4])
if x - r >= 0 and y - r >= 0 and x + r <= W and y + r <= H:
    print ("Yes")
else:
    print ("No")