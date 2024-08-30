print("")
def func1(a=10,b=20):
    print("func1 is invoked")
    print("a = ",a)
    print("b = ",b)
def func2(a,b,c=30):
    print("func2 is invoked")
    print("a = ",a)
    print("b = ",b)
    print("c = ",c)
def func3(*numbers):
    sum=0
    for i in numbers:
        sum=sum+i
    print("Average is: ",sum/len(numbers))
func1()
func2(23,45)
func3(1,2,3,4,5,6)
def name(**random):
    pass
names={"aname":"Apple","bname":"Ball","cname":"Cat"}
def name(**random):
    for term,value in random.items():
        print(f"{term} = {value}")
name(**names)