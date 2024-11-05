num=15
if(num<0):
    print("Number is Negative")
elif(num>0):
    if(num>10 and num<=20):
        print("Number is between 11-20")
    elif(num>20 and num<=30):
        print("Number is between 20-30")
    else:
        print("Number is positive")
else:
    print("Number is equal to zero")