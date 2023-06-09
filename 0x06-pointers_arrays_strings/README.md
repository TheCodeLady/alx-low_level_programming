# 0x06. C - More pointers, arrays and strings

## Resources

## Tasks

0. [strcat](./0-strcat.c): Write a function that concatenates two strings.
        - Prototype: char *_strcat(char *dest, char *src);
        - This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
        - Returns a pointer to the resulting string dest
        - **FYI**: The standard library provides a similar function: strcat. Run man strcat to learn more.
        - Compile the code: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat`
1. [strncat](./strncat.c): Write a function that concatenates two strings.
        - Prototype: char *_strncat(char *dest, char *src, int n);
        - The _strncat function is similar to the _strcat function, except that
        it will use at most n bytes from src; and
        src does not need to be null-terminated if it contains n or more bytes
        - Return a pointer to the resulting string dest
        - **FYI**: The standard library provides a similar function: strncat. Run man strncat to learn more.
        - Compile code: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat`
2. [strncpy](./strncpy.c): Write a function that copies a string.
        - Prototype: char *_strncpy(char *dest, char *src, int n);
        - Your function should work exactly like strncpy
        - FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.
        - Compile code: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy`
