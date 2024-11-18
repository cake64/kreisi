a1 = []
a2 = []
input()
for i in map(int, input().split()):
    if i % 2 == 0:
        a1.append(i)
    else:
        a2.append(i)
 
print(*a2)
print(*a1)
print("YES" if len(a2) <= len(a1) else "NO")
