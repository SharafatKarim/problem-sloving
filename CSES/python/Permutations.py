# 1
# 2 1 n
# 2 1 3 n
# 2 4 1 3 
# 2 4 1 3 5
# 2 4 6 1 3 5

n = int(input())

if n == 2 or n == 3:
  print('NO SOLUTION')
  exit()

for i in range (2, n+1, 2):
  print(i, end=" ")

for i in range (1, n+1, 2):
  print(i, end=" ")