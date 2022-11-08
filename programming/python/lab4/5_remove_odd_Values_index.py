def odd_values_string(str):
    result=' '
    for i in range(len(str)):
        if i%2==0:
            result=result+str[i]
    return result
str=input('enter a string:-')
print(odd_values_string(str))