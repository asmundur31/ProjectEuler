import math
def fib(n):
    f = [1,1,1,0]
    if n==1:
        return 1
    if n==2:
        return 1
    veldi(f,n-1)
    return f[0]
def margfalda(f,m):
    a = f[0]*m[0]+f[1]*m[2]
    b = f[0]*m[1]+f[1]*m[3]
    c = f[2]*m[0]+f[3]*m[2]
    d = f[2]*m[1]+f[3]*m[3]
    f[0]=a
    f[1]=b
    f[2]=c
    f[3]=d
def veldi(f,n):
    if n==0 or n==1:
        return
    m=[1,1,1,0]
    veldi(f,n/2)
    margfalda(f,f)
    if n%2!=0:
        margfalda(f,m)

i=1
while math.floor(math.log10(fib(i)))+1<1000:
    i+=1

print(i)
