n_terms=int(input('how many terms are u want:-'))
n1=0
n2=1
count=0
if n_terms<=0:
    print('enter the postive number:')
elif n_terms==1:
    print('fibnacci series up to n_terms is',n_terms)
    print(n1)
else:
    print('fibonacci number is ')
while count<n_terms:
    print(n1)
    nth=n1+n2
    n1=n2
    n2=nth
    count=count+1
