list = []
n = 100
for i in range(2,n+1):
  for j in range(2,n+1):
    list.append(pow(i,j))
print(len(list))
list.sort()
count = 0
i = 0
while i<(n-1)*(n-1):
  while i+1<(n-1)*(n-1) and list[i]==list[i+1]:
    i+=1
  count+=1
  i+=1
print(count)