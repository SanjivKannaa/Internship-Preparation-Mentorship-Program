'''l = []
for i in range(int(input())):
    l.append(input())
l.sort()
for i in l:
    print(i, end='')
'''




names = []
for i in range(int(input())):
    names.append(input())

def merge_names(names):
    names = sorted(names, key=lambda v: (v.upper(), v[0].islower()))
    return ''.join(names)
print(merge_names(names))


