1 N, M = map(int,input().split())
2 A = list(map(int,input().split()))
3 A.sort(reverse=True)
4 S = sum(A)
5 if A[M-1] >= S / (4*M):
6 print("Yes")
7 else:
8 print("No")