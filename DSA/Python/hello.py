import numpy as np

arr = np.array([1, 2, 3, 4, 5])

print(arr)

print(type(arr))

# typecasting
# a="3456"
# print(type(a))
# a=int(a)
# print(type(a))
# print(a+4)

# b=input("Enter any number: ")
# print(b)
# print(type(b))              #gives always strings

c="Raajj"
print(c[0:2])
print(c[0::2])
print(c[0])
print(c.count('a'))
print(len(c))

d={
    "name":"Raj",
    'age':20,
    'e':{"hobby":'cricket'}
}

print("\n",d['e'])
print("\n",d['e']['hobby'])
print(d.keys())
print(list(d.keys()))
print(d.values())
print(d)
f={
    "player":"Virat",
    "no.":18
}
d.update(f)
print(d)

x=set()
print(type(x)) 
x.add(2)
x.add(2)            #adds only one time
x.add(4)
x.add((3,5,7))
print(x)


