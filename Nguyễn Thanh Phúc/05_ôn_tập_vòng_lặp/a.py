
def gen(x, n):
    ans = 0;
    for i in range(1, n + 1):
        ans = ans * 10 + x
    return ans

def sdx(n):
    length = len(str(n))
    for i in range(1, 10):
        soDoXung = gen(i, length);
        if soDoXung > n:
            return soDoXung
    return gen(1, length + 1)

n = (int)(input())
print(sdx(n))