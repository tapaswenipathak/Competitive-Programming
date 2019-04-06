def reverse_int(n) :
    return int(str(n)[::-1])


N = int(raw_input())
for i in range(N) :
    n1, n2 = raw_input().split()
    n1r = reverse_int(n1)
    n2r = reverse_int(n2)
    result = n1r + n2r
    print(reverse_int(result))
