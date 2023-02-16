def greet(name):
    print("Have a good Day "+name)

greet("Raj")

def factorial_recursive(n):
    if n==1 or n==0:
        return  1
    return n*factorial_recursive(n-1)

print(factorial_recursive(5))