a, b = map(int, raw_input().split())
x = 0 
hours = 0
while a :
	hours += a
	x += a
	a = x / b
	x %= b
print hours
