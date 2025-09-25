t = int(input())
a = list(map(int, input().split()))

mn = min(a)
mx = max(a)
mn_pos = a.index(mn)
mx_pos = a.index(mx)

a[mx_pos], a[mn_pos] = a[mn_pos], a[mx_pos]
print(*a)
