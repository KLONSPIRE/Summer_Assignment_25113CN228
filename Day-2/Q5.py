def sumD(n):
    sum=0
    for i in n:
        sum+= int(i)
    return sum

n = input("Enter a No. : ")
print(f"Sum of Digits = {sumD(n)}")