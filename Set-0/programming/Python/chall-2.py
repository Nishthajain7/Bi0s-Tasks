array = [42, 17, 58, 3, 91, 24, 76]
print(f'Original array = {array}')
n=len(array)
for i in range(n):
    for j in range(i+1,n):
        if array[i]>array[j]:
            array[i],array[j]=array[j],array[i]
print(f'Sorted array = {array}')

target=int(input('Enter the number you are searching for: '))
if target in array:
    # If built-in functions were allowed, index=array.index(target) 
    for i in range(len(array)):
        if array[i]==target:
            index=i
else:
    index = -1
print(f'Index of the number {target} in the sorted array is {index}')