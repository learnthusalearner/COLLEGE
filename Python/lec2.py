#1
#tuple is immutable string is immutable list is mutable
list=[1,2,3,4]
list.pop();
print(list)

#2
light= "yellow"

if(light=="red"):
    print("stop");
elif(light=="green"):
    print("go")
else:
    print('slow')

#3
#if you make a tuple like tuple(a) it will be a string to make it a tuple you need tuple(a,)

#4
movies=[]
m1=input("enter the movie1: ")
movies.append(m1)
m2=input("enter the movie2: ")
movies.append(m2)
m3=input("enter the movie3: ")
movies.append(m3)
print(movies)

#5
a=[1,2,2,1]
b=a[::-1]#used to reverse a->prv arr :->beginning :->end ::_>iterate from beginning to end -1->reverse

if(a==b):
    print("pallindrome")
else:
    print("not pallindrome")


list=[1,2,3,4]
list[2]=4
print(list)
#because lista are mutable

X=(1,2,3,4)
X[2]=4
print(X)
#2ill give an err cause immutable