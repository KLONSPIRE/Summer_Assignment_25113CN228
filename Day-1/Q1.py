def sumN(n):
    sum = 0
    for i in range(1, n+1) :
        sum += n
        n -= 1
    return sum

n = int(input("Enter a Natural no. : "))
print(f"Sum = {sumN(n)}")