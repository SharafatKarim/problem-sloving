# Tutorial
# https://www.geeksforgeeks.org/competitive-programming/cses-solutions-two-knights/

inp = int(input())

for i in range(1, inp+1):
  n = i * i
  print(((n*(n-1))//2) - (4*(i-1)*(i-2)))