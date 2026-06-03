def rev(n):
    r = 0
    while n > 0:
        r *= 10
        r += n % 10
        n //= 10
    return r   

n = int(input("Enter a Number : "))
print(f"Reverse No. = {rev(n)}")