#while loop
print("Q1")

i = 1
while i < 6:
  print(i)
  i += 1

print("Q2")

j = 1
while j < 6:
  print(j)
  if j == 3:
    break
  j += 1

print("Q3")

k = 0
while k < 6:
  k += 1
  if k == 3:
    continue
  print(k)

#for loop
print("Q4")

fruits = ["apple", "banana", "cherry"]
for x in fruits:
  print(x)

print("Q5")

for x in "banana":
  print(x)

print("Q6")

fruits = ["apple", "banana", "cherry"]
for x in fruits:
  print(x)
  if x == "banana":
    break
  
print("Q7")

fruits = ["apple", "banana", "cherry"]
for x in fruits:
  if x == "banana":
    continue
  print(x)

print("Q8")

for a in range(1,5):
  print(a)

print("Q9")

for b in range(1,10,2):
  print(b)

# for making a loop do nothing example
# for d in range(5):
#    pass


