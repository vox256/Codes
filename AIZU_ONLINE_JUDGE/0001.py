for i in range(10):
    if i == 0:
        data = [int(input())]
    else:
        data.append(int(input()))

data.sort()
data.reverse()

for i in range(3):
    print(data[i])