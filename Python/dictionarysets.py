Student = {#unordered,mutable,NO duplicate keys 
    "name":"kunal",
    "subject":["py","java","cpp"],#list
    "marks":("18","19","18"),#tupples
    "age":35,
}
# print(Student) "print the dict"

# print(Student["name"])  "specidic part of dict"

# Student["name"]="Kunal S" "mutable thus name change OK"
# print(Student)

student_B ={} #null dict

# dict in dict is possible NESTED DICT POSSIBLE 

print(Student.keys())

#set
collection={1,2,3,4,1,1,2,2,3}
print(type(collection))
print(collection) #no DUPLICLES

#question
marks={}
x=int(input("enter the marks: "))
marks.update({"phy": x})
y=int(input("enter the marks: "))
marks.update({"chem": y})
z=int(input("enter the marks: "))
marks.update({"mat": z})
print(marks)





