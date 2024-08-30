x=int(input())
match x:
    case 0:
        print("Case 0")
    case 1:
        print("Case 1")
    case _ if(x!=90):
        print("X is  not equal to 90")
    case _ if(x!=80):
        print("X is not equal to 80")
    case _:
        print(x)