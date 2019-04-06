T = int (raw_input ())
def gcd (A, B) :
	if B == 0 :
		return A
	else :
		return gcd (B, A % B)

for i in xrange (T) :
	A, B = map(long, raw_input (). split ())
	ans = gcd (A, B)
	print ans



