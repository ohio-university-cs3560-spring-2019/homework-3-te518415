#Get the last line of wc *
i = 0
while i == 0:
	try:
		total = input()
	except EOFError:
		i = 1

counter = 1

#Get the Lines
lines = ""
while i == 1:
	if total[counter].isnumeric():
		lines += total[counter]
		counter += 1
	else:
		counter += 1
		i = 0
print("Lines: ", lines)

#Get the words
words = ""
while i == 0:
	if total[counter].isnumeric():
		words += total[counter]
		counter += 1
	else:
		counter += 1
		i = 1
print("Words: ", words)

#Get the characters
chars = ""
while i == 1:
	if total[counter].isnumeric():
		chars += total[counter]
		counter += 1
	else:
		counter += 1
		i = 0
print("Characters: ", chars)
