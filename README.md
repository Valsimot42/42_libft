# Libft
<p align="center"><img src="https://42wolfsburg.de/wp-content/uploads/2021/08/42wolfsburg_instagram_logo.jpeg" width="150" height="150" />

#
<h3><b>¤ Table of contents ¤</b></h3>

1) <b>How to use</b>
2) <b>Introduction</b>
3) <b>Instructions</b>
4) <b>Part 1: Libc functions</b>
5) <b>Part 2: Additional functions</b>
6) <b>Examples</b>

---
<h3><b>¤ How to use ¤</b></h3>

* 



---
<h3><b>¤ Introduction ¤</b></h3>

<p align="center">In Libft, we are tasked to redo a set of functions from "libc" library, as well as create some of our own. Functions will have the same prototypes and implement the same behaviors as the originals. The only difference will be their names. They will begin with the "ft_" prefix. For instance, "strlen" becomes "ft_strlen". </p>

---
<h3><b>¤ Instructions ¤</b></h3>

* Project must be written in C.

* Functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors.
 
* All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and Makefile must not relink.

* Makefile must at least contain the rules $(NAME), all, clean, fclean and re.

---

<h3><b>¤ Part 1 - Libc functions ¤</b></h3>


<p align="left̨">
 
|Function|Description|
|:-------|:----------|
isalpha |checks if a character is an alphabetic character (a letter).
isdigit |checks if a character is a digit (0-9).
isalnum | checks if a character is alphanumeric (a letter or a digit).
isascii | checks if a character is a valid ASCII character (0-127 range).
isprint | checks if a character is printable (including spaces and printable ASCII characters).
strlen | calculates the length of a null-terminated string (excluding the null terminator).
memset | sets a block of memory to a specified value.
bzero | sets a block of memory to zero.
memcpy | copies a block of memory from one location to another.
memmove | moves a block of memory, handling overlapping regions correctly.
strlcpy | copies a string into a destination buffer with a specified size, ensuring null-termination.
strlcat | appends a string to the end of a destination string, ensuring the result is null-terminated and fits within a specified size.
toupper | converts a lowercase character to uppercase if applicable, otherwise it returns the same character.
tolower | converts an uppercase character to lowercase if applicable, otherwise it returns the same character.
strchr | searches for the first occurrence of a specified character within a string and returns a pointer to it.
strrchr | searches for the last occurance of a specified character within a string and returns a pointer to it.
stnrcmp | compares two strings up to a specified number of characters and returns the comparison result.
memchr | searches for the first occurrence of a specified byte value within a memory block and returns a pointer to it.
memcmp | compares two memory blocks up to a specified number of bytes and returns the comaprison result.
strnstr | searches for the first occurrence of a substring within a string, up to a specified number of characters.
atoi | converts a string to an integer, discarding leading whitespace and stopping at the first non-digit character.
calloc | allocates and initializes a block of memory for an array, setting all bytes to zero.
strdup | creates a new string by duplicating an existing null-terminated string and returns a pointer to it.

---

<h3><b>¤ Part 2 - Additional functions ¤</b></h3>

|Function name        |ft_substr|
|:--------------------|:--------|
|Prototype|char *ft_substr(char const *s, unsigned int start, size_t len);|
|Turn in files|-|
|Parameters|<b>s</b>: The string from which to create the substring. <b>start</b>: The start index of the substring in the string ’s’. <b>len</b>: The maximum length of the substring.|
|Return value|The substring. NULL if the allocation fails.|
|External ft.|malloc|
|Description|Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.|


|Function name        |ft_strjoin|
|:--------------------|:--------|
|Prototype|char *ft_strjoin(char const *s1, char const *s2);|
|Turn in files|-|
|Parameters|<b>s1</b>: The prefix string. <b>s2</b>: The suffix string.|
|Return value|The new string. NULL if the allocation fails.|
|External ft.|malloc|
|Description|Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.|


|Function name        |ft_strtrim|
|:--------------------|:--------|
|Prototype|char *ft_strtrim(char const *s1, char const *set);|
|Turn in files|-|
|Parameters|<b>s1</b>: The string to be trimmed. <b>set</b>: The reference set of characters to trim.|
|Return value|The trimmed string. NULL if the allocation fails.|
|External ft.|malloc|
|Description|Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.|


|Function name        |ft_split|
|:--------------------|:--------|
|Prototype|char **ft_split(char const *s, char c);|
|Turn in files|-|
|Parameters|<b>s</b>: The string to be split. <b>s2</b>: The delimiter character.
|Return value|The array of new strings resulting from the split. NULL if the allocation fails.|
|External ft.|malloc, free|
|Description|Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.|


|Function name        |ft_itoa|
|:--------------------|:--------|
|Prototype |char *ft_itoa(int n);|
|Turn in files|-|
|Parameters|<b>n</b>: The integer to convert.|
|Return value|The string representing the intege. NULL if the allocation fails.|
|External ft.|malloc|
|Description|Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.|


|Function name        |ft_strmapi|
|:--------------------|:--------|
|Prototype|char *ft_strmapi(char const *s, char (*f)(unsigned int, char));|
|Turn in files|-|
|Parameters|<b>s</b>: The string on which to iterate. <b>f</b>: The function to apply to each character.|
|Return value|The string created from the successive applications of ’f’. NULL if the allocation fails.|
|External ft.|malloc|
|Description|Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.|


|Function name        |ft_striteri|
|:--------------------|:--------|
|Prototype |void ft_striteri(char *s, void (*f)(unsigned int, char *);|
|Turn in files|-|
|Parameters|<b>s</b>: The string on which to iterate. <b>f</b>: The function to apply to each character.|
|Return value|None|
|External ft.|None|
|Description|Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.|


|Function name        |ft_putchar_fd|
|:--------------------|:--------|
|Prototype |void ft_putchar_fd(char c, int fd);|
|Turn in files|-|
|Parameters|<b>c</b>: The character to output. <b>fd</b>: The file descriptor on which to write.|
|Return value|None|
|External ft.|write|
|Description|Outputs the character ’c’ to the given file descriptor.|


|Function name        |ft_putstr_fd|
|:--------------------|:--------|
|Prototype |void ft_putstr_fd(char *s, int fd);|
|Turn in files|-|
|Parameters|<b>s</b>: The string to output. <b>fd</b>: The file descriptor on which to write.|
|Return value|None|
|External ft.|write|
|Description|Outputs the string ’s’ to the given file descriptor.|


|Function name        |ft_putendl_fd|
|:--------------------|:--------|
|Prototype |void ft_putendl_fd(char *s, int fd);|
|Turn in files|-|
|Parameters|<b>s</b>: The string to output. <b>fd</b>: The file descriptor on which to write.|
|Return value|None|
|External ft.|write|
|Description|Outputs the string ’s’ to the given file descriptor followed by a newline.|


|Function name        |ft_putnbr_fd|
|:--------------------|:--------|
|Prototype |void ft_putnbr_fd(int n, int fd);|
|Turn in files|-|
|Parameters|<b>n</b>: The integer to output. <b>fd</b>: The file descriptor on which to write.|
|Return value|None|
|External ft.|write|
|Description|Outputs the integer ’n’ to the given file descriptor.|

---

<h3><b>¤ Part 3 - Examples ¤</b></h3>

• MEMMOVE •

```ruby
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    memmove(destination, source, strlen(source) + 1);

    printf("Copied string: %s\n", destination);
    return 0;
}
```

The explanation of 'memmove' arguments are as follows:

* <b>'destination'</b>: A pointer to the destination memory block where the data will be moved to.

* <b>'source'</b>: A pointer to the source memory block containing the data to be moved.

* <b>'size'</b>: The number of bytes to be moved from the source to the destination (strlen(source) + 1).

<b>Description</b>: 'memmove' copies the entire content of the 'source' array, including the null terminator, to the 'destination' array. The 'strlen(source + 1)' is used to calculate the size of the source string, including the null terminator.

#

• SUBSTR •

```ruby
#include <stdio.h>
#include <stdlib.h>


int main() {
    char input[] = "Hello, World!";
    int start = 7;
    int length = 5;

    char *substring = ft_substr(s, start, length);

    printf("Substring: %s\n", substring);

    free(substring);
    return 0;
}
```

The explanation of 'substr' arguments are as follows:

* <b>'s'</b>: A pointer to the input string.

* <b>'start'</b>: The string index of the substring.

* <b>'len'</b>: The length of the substring to be extracted.

<b>Description</b>: 'substr' extracts a substring from the given input string 's'. If either 'len' or 'start' is invalid, the function will return a duplicate of an empty string.  In case of a vaild input, it will alocate memory for the 'substring'. Null terminator must also be accounted for when allocating memory.

#

• SPLIT •

```ruby
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *input = "Hello,World,OpenAI";
    char delimiter = ',';

    char **result = ft_split(input, delimiter);

    if (result) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("Substring %d: %s\n", i, result[i]);
        }

        for (int i = 0; result[i] != NULL; i++) {
            free(result[i]);
        }
        free(result);
    }

    return 0;
}
```

The explanation of "split" arguments are as follows:

* <b>'s'</b>: The string that will be divided into substrings.

* <b>'c'</b>: The delimiter character.

<b>Description</b>: 'split', as its name suggests, splits the input into substrings if delimiter character is encountered. Sufficient memory is allocated for every substring, and upon successful execution of the program, frees the allocated memory.
