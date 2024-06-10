#!/usr/bin/python3

def is_palindrome(n):
    return str(n) == str(n)[::-1]
largest_palindrome = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        number = i * j
        if is_palindrome(number) and number > largest_palindrome:
            largest_palindrome = number
print(largest_palindrome)
"""
with open("102-result", "W") as file:
    file.write(str(largest_palindrome))
"""
