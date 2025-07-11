s = input()
cnt = 1
max_cnt = 1
prev = ''

for i in s:
  if i != prev:
    cnt = 1
  elif i == prev:
    cnt += 1
    max_cnt = max(max_cnt, cnt)
  prev = i

print(max_cnt)