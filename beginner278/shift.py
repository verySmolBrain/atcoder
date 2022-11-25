length, numTimes = input().split()
seq = input().split()

for i in range(int(numTimes)):
    del seq[0]
    seq.append(0)
    
'''
Reflection
N, K = map(int, input().split())
A = list(map(int, input().split()))

A = A[1:] + [0]
'''