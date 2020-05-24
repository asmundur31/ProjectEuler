def veldathversumma(n,v):
    sum = 0
    while n>0:
        sum+=(n%10)**v
        n/=10
    return sum

summa = 0

print(pow(1234,20))
