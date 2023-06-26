# Alx Pointers, Arrays, and Strings project:



## TASKS:

### MANDATORY:

- TASK1:
	- Writing a function that takes a pointer to an int as parameter and updates the value it points to to 98.

	- Prototype: void reset_to_98(int *n);
- TASK2:
	- Writing a function that swaps the values of two integers.

	- Prototype: void swap_int(int *a, int *b);
- TASK3:
	- Writing a function that returns the length of a string.

	- Prototype: int _strlen(char *s);
- TASK4:
	- Writing a function that prints a string, followed by a new line, to stdout.

	- Prototype: void _puts(char *str);
- TASK5:
	- Writing a function that prints a string, in reverse, followed by a new line.

	- Prototype: void print_rev(char *s);
- TASK6:
	- Writing a function that reverses a string.

	- Prototype: void rev_string(char *s);
- TASK7:
	- Writing a function that prints every other character of a string, starting with the first character, followed by a new line.

	- Prototype: void puts2(char *str);
- TASK8:
	- Writing a function that prints half of a string, followed by a new line.

	- Prototype: void puts_half(char *str);
	- The function should print the second half of the string
	- If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
- TASK9:
	- Writing a function that prints n elements of an array of integers, followed by a new line.

	- Prototype: void print_array(int *a, int n);
	- where n is the number of elements of the array to be printed
	- Numbers must be separated by comma, followed by a space
	- The numbers should be displayed in the same order as they are stored in the array
	- Allowed to use printf
- TASK10:
	- Prototype: char *_strcpy(char *dest, char *src);
	- Writing a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

	- Return value: the pointer to dest
### ADVANCED:

- TASK11:
	- Writing a function that convert a string to an integer.

	- Prototype: int _atoi(char *s);
	- The number in the string can be preceded by an infinite number of characters
	- Need to take into account all the - and + signs before the number
	- If there are no numbers in the string, the function must return 0
	- Not allowed to use long
	- Not allowed to declare new variables of “type” array
	- Not allowed to hard-code special values
	- will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
- TASK12:
	- Creating a program that generates random valid passwords for the program 101-crackme.

	- Allowed to use the standard library
	- Don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
	- Man srand, rand, time
	- gdb and objdump can help
***
