# Python - if/else, loops, functions

### Focus
Learn about Python's variable scopes. How to write conditional statements as well as loops. 

### Environment
- OS: [Ubuntu 14.04 LTS](http://releases.ubuntu.com/14.04/) 
- Interpreter: [Python 3.4.3](https://www.python.org/downloads/release/python-343/)
- Compiler: [GCC 4.8.4](https://www.gnu.org/software/gcc/gcc-4.8/)
- Text editor: [Vim](https://www.vim.org/)
- Others:
	- [PEP 8 (v1.7.x)](https://pep8.readthedocs.io/en/release-1.7.x/intro.html)

### Example Usages
[0-positive_or_negative.py](0-positive_or_negative.py)
```
0x01-python-if_else_loops_functions$ ./0-positive_or_negative.py 
-4 is negative
0x01-python-if_else_loops_functions$ ./0-positive_or_negative.py 
0 is zero
0x01-python-if_else_loops_functions$ ./0-positive_or_negative.py 
-3 is negative
```
[1-last_digit.py](1-last_digit.py)
```
uillaume@ubuntu:~/0x01$ ./1-last_digit.py
Last digit of 4205 is 5 and is less than 6 and not 0
0x01-python-if_else_loops_functions$ ./1-last_digit.py
Last digit of -626 is -6 and is less than 6 and not 0
0x01-python-if_else_loops_functions$ ./1-last_digit.py
Last digit of 1144 is 4 and is less than 6 and not 0
```
[2-print_alphabet.py](2-print_alphabet.py)
```
0x01-python-if_else_loops_functions$ ./2-print_alphabet.py
abcdefghijklmnopqrstuvwxyz0x01-python-if_else_loops_functions$
```
[3-print_alphabt.py](3-print_alphabt.py)
```
0x01-python-if_else_loops_functions$ ./3-print_alphabt.py
abcdfghijklmnoprstuvwxyz0x01-python-if_else_loops_functions$
```
[4-print_hexa.py](4-print_hexa.py)
```
0x01-python-if_else_loops_functions$ ./4-print_hexa.py
0 = 0x0
1 = 0x1
2 = 0x2
3 = 0x3
4 = 0x4
5 = 0x5
6 = 0x6
...
```
[5-print_comb2.py](5-print_comb2.py)
```
0x01-python-if_else_loops_functions$ ./5-print_comb2.py
00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
```
[6-print_comb3.py](6-print_comb3.py)
```
0x01-python-if_else_loops_functions$ ./6-print_comb3.py
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
```
[7-islower.py](7-islower.py)
```
0x01-python-if_else_loops_functions$ cat 7-main.py
#!/usr/bin/env python3
islower = __import__('7-islower').islower

print("a is {}".format("lower" if islower("a") else "upper"))
print("H is {}".format("lower" if islower("H") else "upper"))
print("A is {}".format("lower" if islower("A") else "upper"))
print("3 is {}".format("lower" if islower("3") else "upper"))
print("g is {}".format("lower" if islower("g") else "upper"))

0x01-python-if_else_loops_functions$ ./7-main.py
a is lower
H is upper
A is upper
3 is upper
g is lower
```
[8-uppercase.py](8-uppercase.py)
```
0x01-python-if_else_loops_functions$ cat 8-main.py
#!/usr/bin/env python3
uppercase = __import__('8-uppercase').uppercase

uppercase("holberton")
uppercase("Holberton School 98 Battery street")

0x01-python-if_else_loops_functions$ ./8-main.py
HOLBERTON
HOLBERTON SCHOOL 98 BATTERY STREET
```
[9-print_last_digit.py](9-print_last_digit.py)
```
0x01-python-if_else_loops_functions$ cat 9-main.py
#!/usr/bin/env python3
print_last_digit = __import__('9-print_last_digit').print_last_digit

print_last_digit(98)
print_last_digit(0)
r = print_last_digit(-1024)
print(r)

0x01-python-if_else_loops_functions$ ./9-main.py
8044
```
[10-add.py](10-add.py)
```
0x01-python-if_else_loops_functions$ cat 10-main.py
#!/usr/bin/env python3
add = __import__('10-add').add

print(add(1, 2))
print(add(98, 0))
print(add(100, -2))

0x01-python-if_else_loops_functions$ ./10-main.py
3
98
98
```
[11-pow.py](11-pow.py)
```
0x01-python-if_else_loops_functions$ cat 11-main.py
#!/usr/bin/env python3
pow = __import__('11-pow').pow

print(pow(2, 2))
print(pow(98, 2))
print(pow(98, 0))
print(pow(100, -2))
print(pow(-4, 5))

0x01-python-if_else_loops_functions$ ./11-main.py
4
9604
1
0.0001
-1024
```
[12-fizzbuzz.py](12-fizzbuzz.py)
```
0x01-python-if_else_loops_functions$ cat 12-main.py
#!/usr/bin/env python3
fizzbuzz = __import__('12-fizzbuzz').fizzbuzz

fizzbuzz()
print("")

0x01-python-if_else_loops_functions$ ./12-main.py | cat -e
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz $
```
[13-insert_number.c](13-insert_number.c), [lists.h](lists.h)
```
0x01-python-if_else_loops_functions$ gcc -Wall -Werror -Wextra -pedantic 13-main.c linked_lists.c 13-insert_number.c -o insert
0x01-python-if_else_loops_functions$ ./insert
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
27
98
402
1024
```
[100-print_tebahpla.py](100-print_tebahpla.py)
```
0x01-python-if_else_loops_functions$ ./100-print_tebahpla.py
zYxWvUtSrQpOnMlKjIhGfEdCbA0x01-python-if_else_loops_functions$
```
[101-remove_char_at.py](101-remove_char_at.py)
```
0x01-python-if_else_loops_functions$ cat 101-main.py
#!/usr/bin/env python3
remove_char_at = __import__('101-remove_char_at').remove_char_at

print(remove_char_at("Holberton School", 3))
print(remove_char_at("Chicago", 2))
print(remove_char_at("C is fun!", 0))
print(remove_char_at("School", 10))
print(remove_char_at("Python", -2))

0x01-python-if_else_loops_functions$ ./101-main.py
Holerton School
Chcago
 is fun!
School
Python
```
[102-magic_calculation.py](102-magic_calculation.py)
```
Task involved writing a Python function that has the same bytecode as the task defined.
```
### Author
- [Alex Yu](https://github.com/AlexYu01)
### Acknowledgments
- [Holberton](https://www.holbertonschool.com/)
