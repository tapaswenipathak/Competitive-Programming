n = int (raw_input ())
output = ""
for i in range (1, n, 2) :
	output = ""
	star = n - i
	for j in range (star / 2) :
		output += "*"
	D = n - star
	for j in range (D) :
		output += "D"
	for j in range (star / 2) :
		output += "*"
	print output

output = ""

for i in range (n) :
	output += "D"
print output


for i in range (n - 2, 0, -2) :
    output = ""
    star = n - i 
    for j in range (star / 2) :
        output += "*" 
    D = n - star
    for j in range (D) :
        output += "D" 
    for j in range (star / 2) :
        output += "*" 
    print output

