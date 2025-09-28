n = int(input())
a = list(map(int, input().split()))

cnt = 0
odd = False
while True:
    for i, item in enumerate(a):
        if item % 2:
            odd = True
            break
        a[i] = item // 2
    if odd:
        break;
    cnt += 1

print(cnt)
