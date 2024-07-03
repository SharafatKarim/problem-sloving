t = int(input())
for i in range(t):
    n = int(input())
    s = input()
    pie_c = s.count("pie")
    map_c = s.count("map")
    total = pie_c + map_c - s.count("mapie")
    if total == 0:
        print(0)
    else:
        print(total)