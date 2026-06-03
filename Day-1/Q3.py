def fact(n):
    if n <= 1:
        return 1
    f = 1
    for i in range(2, n+1):
        f *= i
    return f


n = int(input("Enter a Number: "))
print(f"Factorial = {fact(n)}")