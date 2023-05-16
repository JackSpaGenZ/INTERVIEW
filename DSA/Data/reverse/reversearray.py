# def reversearray(arr) :
#     start = 0 
#     end = 4
#     while start<end :
#         arr[start], arr[end] = arr[end], arr[start]
#         start += 1
#         end -= 1

# arr = [1,2,3,4,5]
# reversearray(arr)
# print(arr)


def reverseList(A):
  print( A[::-1])
     
# Driver function to test above function
A = [1, 2, 3, 4, 5, 6]
print(A)
print("Reversed list is")
reverseList(A) 