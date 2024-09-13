marks=[2,3,4,5,"Hello",True]
print(marks)
print(type(marks))
print(marks[0])
print(marks[1])
print(marks[2])
print(marks[3])
# Negative Index
print("Negative Index")
print(marks[-3])
print(marks[len(marks)-3])#positive index
print(marks[6-3])#positive index
print(marks[3])
if "Hello" in marks:
    print("Yes")
else:
    print("No")
print(marks)
print(marks[1:8])
print(marks[1:8:2]) 
marks=[i*i for i in range(10)]
print(marks)
marks=[i*i for i in range(10) if i%2==0]
print(marks)