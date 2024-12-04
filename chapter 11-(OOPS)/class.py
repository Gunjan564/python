class Employee:
    language="python" # This is a class attribute
    salary=10000
    name="Hermoine"
    def __init__(self,name,language,salary)-> None:
        self.name=name
        self.language=language
        self.salary=salary
        print(f"The name is ",name)
        
    def getInfo(self):
        print(f"The language is {self.language}. The salary is {self.salary}")
    
    def greet(self):
        print("Good Morning")
        
    def namewrite(self):
        print(self.name)
harry=Employee("Harry Potter","English",500000)
harry.language="java" # This is an instance attribute
harry.getInfo()
Employee.getInfo(harry)