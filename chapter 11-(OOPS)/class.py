class Employee:
    language="python" # This is a class attribute
    salary=100000
    def getInfo(self):
        print(f"The language is {self.language}. The salary is {self.salary}")
    
    def greet(self):
        print("Good Morning")
harry=Employee()
harry.language="java" # This is an instance attribute
harry.getInfo()