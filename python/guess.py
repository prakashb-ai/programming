secert = "prakash"
guess=" "
guess_count=0
guess_limit=3
out_of_guess=False



while guess!=secert and not(out_of_guess):

    if guess_count<guess_limit:
        guess=input("enter your guess:-")
        guess_count +=1
    else:
        out_of_guess =True



if out_of_guess:
    print("out of guess, you loose")
else:

   print("you win")