a, b = map(int, input().split())
s = input()

flag = True

if s[a] == '-':
    digits = 0
    for char in s:
        if char == '-':
            continue
        dig = int(char)
        if dig >= 0 and dig <= 9:
            digits += 1
    
    if digits == (a + b):
        print('Yes')
    else:
        print('No')
else:
    print('No')
