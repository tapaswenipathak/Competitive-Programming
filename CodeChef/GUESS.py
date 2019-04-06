import sys
T = int(raw_input())

for i in range(T) :
    N, M = map(long, raw_input().split())
    if N % 2 == 0 or M % 2 == 0 :
        print "1/2"
    else :
        den = N * M;
        num = (N * M) / 2
        res = str(num) + "/" + str(den)
        print res
