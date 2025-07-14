import math

li = list(map(int, input().split()))

a = li[0]
b = li[1]
c = li[2]

if a == 0 and b == 0 and c == 0:
  print("-1")
  exit()

if a == 0 and b == 0:
  print("0")
  exit()

if a == 0:
  print("1")
  print(f"{-c/b:.10f}")
  exit()

dis = (b*b)-(4*a*c) 

if dis < 0:
  print("0")

elif dis == 0:
  print("1")
  print(-b/(2*a))

elif dis > 0:
  print("2")
  if (-b-math.sqrt(dis))/(2*a) < (-b+math.sqrt(dis))/(2*a):
    print(f"{(-b-math.sqrt(dis))/(2*a):.10f}")
    print(f"{(-b+math.sqrt(dis))/(2*a):.10f}")
  else:
    print(f"{(-b+math.sqrt(dis))/(2*a):.10f}")
    print(f"{(-b-math.sqrt(dis))/(2*a):.10f}")

