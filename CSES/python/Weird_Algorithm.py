a = int(input())

print(a, end=" ")

while a != 1:
  if a % 2 == 0:
    a //= 2
    print(a, end=" ")
  else:
    a *= 3 
    a += 1
    print(a, end=" ")
