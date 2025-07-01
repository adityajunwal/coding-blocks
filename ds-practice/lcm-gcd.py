# Recursive
def gcdR(a, b):
    if b == 0:
        return a
    
    return gcdR(b, a%b)

# iterative
def gcdI(a, b):
    while b > 0:
        temp = b
        b = a % b
        a = temp

    return a

def lcm(a, b):
    gcd = gcdR(a, b)

    return a * b / gcd

print(gcdR(12, 20))
print(lcm(20, 12))
print(gcdI(7, 5))
