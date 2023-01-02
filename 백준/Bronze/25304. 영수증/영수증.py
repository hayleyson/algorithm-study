x = int(input(""))
n = int(input(""))
sum = 0
for i in range(n):
    tup = input("")
    a, b = tup.split(" ")
    sum += int(a) * int(b)
if x == sum:
    print("Yes")
else:
    print("No")