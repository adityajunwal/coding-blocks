# n = input("Enter the Character: ")

# for i in range(1, n+1):
#     print(" "*(n-i), end="")
#     print("*"*(2*i-1))

# for i in range(1, n+1):
#     for j in range(1, n-i+1):
#         print(" ", end=" ")
#     for j in range(1, 2*i):
#         print(j, end=" ")
#     print()
    
# if ord(n) in range(65, 65+26):
#     print(f"{n} is a Capital case character.")
# elif ord(n) in range(97, 97+26):
#     print(f"{n} is a Small case Character!")

a = 10
b = 10

print(id(a))
print(id(b))
print(id(10))