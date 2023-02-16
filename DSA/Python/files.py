f=open('sample.txt','r')
data=f.read(12)          # will read 1st 12 characters 
print(data)
f.close()

a=open('another.txt','w')
a.write("Please write this to the file ")

a=open('another.txt','a')           # append mode
a.write("Write to the end.")
a.close()

with open('another.txt','r') as b:
    x=b.read()
print(x)