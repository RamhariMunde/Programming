def search(arr,x,N):
    for i in range (0,N):
        if (arr[i]== x):
            return i
    return -1
arr = []
n = int(input("Enter the no.of element"))
for i in range(n):
    f = int(input())
    arr.append(f)
N = len(arr)
x = int(input("Enter the no. for search"))
result = search(arr,x,N)
if result == -1:
    print("Elements is not present in arr")
else:
    print("Elements is present at ")          

