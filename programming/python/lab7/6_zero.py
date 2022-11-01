def zero_ending(scores):
    total = 0
    for number in scores:
        if number%10 == 0:
            total += number
    return total

scores =  [200, 456, 300, 100, 234, 678]
s = zero_ending(scores)
print(s)