sum = 0
for x in range (999):
	if (x % 3 == 0 | x % 5 == 0):
		sum += x
print("The sum is: ", sum)
