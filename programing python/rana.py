a = input().split()
S = []
for e in a:

    if e[len(e)-1] != '4':
    S.append(e)

    print(*S, end="")
