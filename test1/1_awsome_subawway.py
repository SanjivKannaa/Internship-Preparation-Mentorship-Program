def sub_lists (l):
    lists = [[]]
    for i in range(len(l) + 1):
        for j in range(i):
            lists.append(l[j: i])
    return lists




for _ in range(int(input())):
    n, m, k = [int(i) for i in input().split()]
    l = [int(i) for i in input().split()]
    count = 0
    for i in sub_lists(l):
        if i == []:
            continue
        prod = 1
        for j in i:
            prod*=j
        if prod%m == k:
            count += 1
    print(count)