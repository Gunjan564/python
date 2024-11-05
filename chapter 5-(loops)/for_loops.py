name="16April"
for i in name:
    print(i)
string=["Apple","Ball","Cat","Dog"]
for noun in string:
    print(noun)
    for i in noun:
        print(i)
for n in range(10):#it will consider 10 numbers i.e. 0-9
    print(n);"""if n+1 is written in place of n then then it will still 
     print 10 numbers but it will add one number at last and remove the 
     initial number"""#semicolon is added before multiline comment 
for n in range(1,5):#consider only 1-4. Does not consider 5
    print(n)
for n in range(1,50,5):#consider numbers from 1 to 49 but the difference will be 5
    print(n)
for i in range(12):
    pass #pass is a null statement in python. it instructs to "do nothing"