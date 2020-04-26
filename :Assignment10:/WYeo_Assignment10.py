a = "+ "
b = "- "
c = "| "
d = "  "
i = 0

def print_rows():
    i = 0
    print("")
    while (i < 11):
        if i % 5 == 0:
            print (a, end = '')
        else:
            print(b, end = '')
        i = i + 1

def print_columns():
    i = 0
    print("")
    while (i < 11):
        if i % 5 == 0:
            print (c, end = '')
        else:
            print(d, end = '')
        i = i + 1

count = 0

while (count < 11):
	if count % 5 == 0:
		print_rows()
	else:
		print_columns()
	count = count + 1
