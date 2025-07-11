n = int(input())
li = list(map(int, input().split()))
dict = {}

for i in range(n-1):
  inp = li[i]
  dict[inp] = inp 

for i in range (1, n+1):
  if dict.get(i) is None:
    print(i)