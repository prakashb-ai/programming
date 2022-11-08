def first_three(str):
    return str[:3] if len(str)>3 else str

str=input('enter a string:-')
print(first_three(str))