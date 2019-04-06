n = raw_input ()
n1 = int (n[ : len (n) - 1])
n2 = int (n[ : len (n) - 2] + n[len (n) - 1])

n = int (n)
print max (n, n1, n2)

