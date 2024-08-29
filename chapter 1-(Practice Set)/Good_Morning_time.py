import time
timmings=time.strftime('%H:%M:%S')
if(timmings>='00:00:00' and timmings<'12:00:00'):
    print("Good Morning")
elif(timmings>='12:00:00' and timmings<'15:00:00'):
    print("Good afternoon")
elif(timmings>='15:00:00' and timmings<'18:00:00'):
    print("Good evening")
else:
    print("Good night")
