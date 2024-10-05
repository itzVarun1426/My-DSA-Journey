#recursion example 
#binary tree 
    #pre order binary tree solving (root , left , right)
    #inorder binary tree solving ( left , root , right)
    #postorder binary tree solving (left , right , root)
#binary search tree 
    #no duplicate values 
    #min 0 max 2
    #left<root<right
    #searching operation decreases logarithmically

# def fact(n):
#     if(n<=1):
#         return 1
#     return n*fact(n-1)

# n=int(input("Enter the number to find the factorial: "))
# print(f'''The factorial of the number is { fact(n)} ''')

def display(n):
    if(n==1):
        return print(n)
    print(n)
    return display(n-1)
print("printing number from 1 to 10: ")
display(10)