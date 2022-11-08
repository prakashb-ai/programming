def sum_of_digit_string(str1):
    sum_of_digit=0
    for x in str1:
        if x.isdigit()==True:
            z=int(x)
            sum_of_digit=sum_of_digit+z
    return sum_of_digit

str1=input('enter a string:-')
print(sum_of_digit_string(str1))
