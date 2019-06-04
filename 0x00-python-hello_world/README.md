# Python - Hello, World

### Focus
Learn all about the Python programming language. How to use the Python interpreter. How can one print text and variables using print.

### Environment
- [Ubuntu 14.04 LTS](http://releases.ubuntu.com/14.04/) 
- [Python 3.4.3](https://www.python.org/downloads/release/python-343/)
- [PEP 8 (v1.7.x)](https://pep8.readthedocs.io/en/release-1.7.x/intro.html)
- [GCC 4.8.4](https://www.gnu.org/software/gcc/gcc-4.8/)

### Example Usages

[0-run](0-run)
```
0x00-python-hello_world$ cat main.py 
#!/usr/bin/python3
print("Holberton School")

0x00-python-hello_world$ export PYFILE=main.py
0x00-python-hello_world$ ./0-run
Holberton School
```
[1-run_inline](1-run_inline)
```
0x00-python-hello_world$ export PYCODE='print("Holberton School: {}".format(88+10))'
0x00-python-hello_world$ ./1-run_inline 
Holberton School: 98
```
[2-print.py](2-print.py)
```
0x00-python-hello_world$ ./2-print.py 
"Programming is like building a multilingual puzzle
```
[3-print_number.py](3-print_number.py)
```
0x00-python-hello_world$ ./3-print_number.py
98 Battery street
```
[4-print_float.py](4-print_float.py)
```
0x00-python-hello_world$ ./4-print_float.py
Float: 3.14
```
[5-print_string.py](5-print_string.py)
```
0x00-python-hello_world$ ./5-print_string.py 
Holberton SchoolHolberton SchoolHolberton School
Holberton
```
[6-concat.py](6-concat.py)
```
0x00-python-hello_world$ ./6-concat.py
Welcome to Holberton School!
0x00-python-hello_world$ wc -l 6-concat.py
5 6-concat.py
```
[7-edges.py](7-edges.py)
```
0x00-python-hello_world$ ./7-edges.py
First 3 letters: Hol
Last 2 letters: on
Middle word: olberto
0x00-python-hello_world$ wc -l 7-edges.py
8 7-edges.py
```
[8-concat_edges.py](8-concat_edges.py)
```
0x00-python-hello_world$ ./8-concat_edges.py
object-oriented programming with Python
0x00-python-hello_world$ wc -l 8-concat_edges.py
5 8-concat_edges.py
```
[9-easter_egg.py](9-easter_egg.py)
```
0x00-python-hello_world$ ./9-easter_egg.py
The Zen of Python, by Tim Peters

Beautiful is better than ugly.
Explicit is better than implicit.
Simple is better than complex.
...
```
[10-check_cycle.c](10-check_cycle.c), [lists.h](lists.h)
```
0x00-python-hello_world$ gcc -Wall -Werror -Wextra -pedantic 10-main.c 10-check_cycle.c 10-linked_lists.c -o cycle
0x00-python-hello_world$ ./cycle 
1024
402
98
4
3
2
1
0
Linked list has no cycle
Linked list has a cycle
```
[100-write.py](100-write.py)
```
0x00-python-hello_world$ ./100-write.py
and that piece of art is useful - Dora Korpar, 2015-10-19
0x00-python-hello_world$ echo $?
1
0x00-python-hello_world$ ./100-write.py 2> q
0x00-python-hello_world$ cat q
and that piece of art is useful - Dora Korpar, 2015-10-19
```
[101-compile](101-compile)
```
0x00-python-hello_world$ cat main.py 
#!/usr/bin/python3
print("Holberton School")

0x00-python-hello_world$ export PYFILE=main.py
0x00-python-hello_world$ ./101-compile
Compiling main.py ...
0x00-python-hello_world$ ls
101-compile  main.py  main.pyc
0x00-python-hello_world$ cat main.pyc | zgrep -c "Holberton School"
1
0x00-python-hello_world$ od -t x1 main.pyc # SYSTEM DEPENDANT => CAN BE DIFFERENT
0000000 ee 0c 0d 0a 91 26 3e 58 31 00 00 00 e3 00 00 00
0000020 00 00 00 00 00 00 00 00 00 02 00 00 00 40 00 00
0000040 00 73 0e 00 00 00 65 00 00 64 00 00 83 01 00 01
...
```
[102-magic_calculation.py](102-magic_calculation.py)
```
Task involved writing a Python function that has the same bytecode as the task defined.
```

### Author
- [Alex Yu](https://github.com/AlexYu01)
### Acknowledgments
- [Holberton](https://www.holbertonschool.com/)
