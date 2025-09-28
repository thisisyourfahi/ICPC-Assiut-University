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


# even simpler version
# n = int(input())
# a = list(map(int, input().split()))

# cnt = 0
# while all(x % 2 == 0 for x in a):
#     a= [x // 2 for x in a]
#     cnt += 1
# print(cnt)
