s = input()
n = len(s)
l, r = 0, 0
cnt_r, cnt_l = 0, 0
a = []
while r < n:
    if s[r] == 'L':
        cnt_l += 1
    else :
        cnt_r += 1
    
    if cnt_r == cnt_l:
        a.append(s[l:r + 1])
        l = r + 1
        cnt_l, cnt_r = 0, 0
    r += 1
print(len(a))
for item in a:
    print(item)
