n = int(input())
li = list(map(int, input().split()))

ma = li[0]
cnt = 0
for i in li:
  if i < ma:
    cnt += ma - i
  else:
    ma = i

print(cnt)