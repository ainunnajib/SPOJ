t = int(input())
for _ in range(t):
    ans = '1'
    n = int(input())
    for __ in range(n):
        s = ''
        l = len(ans)
        i = 0
        while i < l:
            if ans[i:i+3] in ['111', '222', '333']:
                s += '3' + ans[i]
                i += 3
            elif ans[i:i+2] in ['11', '22', '33']:
                s += '2' + ans[i]
                i += 2
            else:
                s += '1' + ans[i]
                i += 1
        ans = s
    print('Scenario #' + str(_+1) + ': ' + str(ans))