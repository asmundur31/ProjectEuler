def factorial(n):
    sum=1
    for i in range(1,n+1):
        sum*=i
    return sum

n=factorial(100)
summa=0
while n>0:
    summa+=n%10
    n/=10
print(summa)
