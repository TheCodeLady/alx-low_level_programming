0x06. C - More pointers, arrays and strings

Tasks
0. strcat: Write a function that concatenates two strings.
Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest
FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.
Compile the code: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
