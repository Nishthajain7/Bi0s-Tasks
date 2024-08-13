# Count the number of times each letter occurs in a string
string=input("Enter string: ")
count={}
for char in string:
    if char in count:
        count[char]+=1
    else:
        count[char]=1
print(count)
# Reverse the string using a for loop
reversed=''
for i in range(len(string)-1, -1, -1):
    reversed += string[i]
print(f"The Reversed string is '{reversed}'")