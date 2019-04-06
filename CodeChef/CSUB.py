T = int (raw_input ())

for i in range (T) :
	N = int (raw_input ())
	string = raw_input ()
	one = 0
	for j in range (len (string)) :
		if (string[j] == '1') :
			one += 1
	ans = (one * (one + 1) ) / 2;
	print ans


