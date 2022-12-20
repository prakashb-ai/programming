#matrix addition


res=[]

x=[[1,2],[2,1]]
y=[[0,0],[1,1]]

res=[[0,0],[0,0]]

for i in range(len(x)):
    for j in range(len(x[0])):
        res[i][j]=x[i][j]+y[i][j]
for i in res:
    print(i)