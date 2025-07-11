n = int(input())
li = []

for i in range(n):
  li.append(list(map(int, input().split())))

for i in li:
  lo = i[0]
  mx = i[1]

  pre = max(lo, mx) - 1
  pre_ar = pre * pre
  
  if pre % 2 == 0:
    print(pre_ar + pre + 1 - lo + mx)
  else:
    print(pre_ar + pre + 1 + lo - mx)
