import time

st = time.time()
with open(r"D:\Cấu trúc dữ liệu và giải thuật\test\test01.INP") as f:
    n = [int(x) for x in next(f).split()]
    a = [[int(x) for x in line.split()] for line in f]

a.sort()
et = time.time()
res = et - st
res = res * 1000
print(res)