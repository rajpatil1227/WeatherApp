class RailwayForm:
    #formType="RailwayForm"
    def printData(self):
        print(f"Name is {self.name}")
        print(f"Train is {self.train}")

class constructor:
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary
        print("Constructor is called")

    def getDetails(self):                           # use @staticmethod to avoid use of self
        print(f"Name is {self.name}")
        print(f"Salary is {self.salary}")

rajsApplication = RailwayForm()
rajsApplication.name=("Raj")
rajsApplication.train=("Maharashtra")
rajsApplication.printData()
 
a=constructor("Raj",100000)         # we just created a object and the constructor is called!
a.getDetails()

