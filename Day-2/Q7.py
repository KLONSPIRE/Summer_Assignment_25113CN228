def prodD(n):
    prod=1
    for i in n:
        prod*= int(i)
    return prod

n = input("Enter a No. : ")
print(f"Product of Digits = {prodD(n)}")