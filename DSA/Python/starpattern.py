for i in range(4):
    print("*"*(i+1))

n=4 
for i in range(4):
    print(" " *(n-i-1), end="")
    print("*" *(2*i+1), end="")
    print(" " *(n-i-1))
