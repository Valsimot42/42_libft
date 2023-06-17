# Libft
<p align="center"><img src="https://42wolfsburg.de/wp-content/uploads/2021/08/42wolfsburg_instagram_logo.jpeg" width="150" height="150" />

#
<h3><b>¤ Table of contents ¤</b></h3>

1) <b>Introduction</b>
2) <b>Instructions</b>
3) <b>Part 1: Libc functions</b>
4) <b>Part 2: Additional functions</b>
5) <b>Examples</b>

---
<h3><b>¤ Introduction ¤</b></h3>

<p align="center">In Libft, we are tasked to redo a set of functions from "libc" library, as well as create some of our own.
Your functions will have the same prototypes and implement the same behaviors as the originals. They must comply
with the way they are defined in their man. The only difference will be their names. They
will begin with the "ft_" prefix. For instance, "strlen" becomes "ft_strlen".</p>

---
<h3><b>¤ Instructions ¤</b></h3>

* Your project must be written in C.

*  Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.

* Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the evaluation.
 
* All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink.

* Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.

* To turn in bonuses to your project, you must include a rule bonus to your Makefile, which will add all the various headers, librairies or functions that are forbidden on the main part of the project. Bonuses must be in a different file _bonus.{c/h} if the subject does not specify anything else. Mandatory and bonus part evaluation is done separately.

* If your project allows you to use your libft, you must copy its sources and its associated Makefile in a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.
   
* We encourage you to create test programs for your project even though this work won’t have to be submitted and won’t be graded. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. Indeed, during defence, you are free to use your tests and/or the tests of the peer you are evaluating.
   
* Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop.



---

<h3><b>¤ Part 1 - Libc functions ¤</b></h3>


<p align="left̨">
 
|Function|Description|
|:-------|:----------|
ISALPHA |checks if a character is an alphabetic character (a letter).
ISDIGIT |checks if a character is a digit (0-9).
ISALNUM | checks if a character is alphanumeric (a letter or a digit).
ISASCII | checks if a character is a valid ASCII character (0-127 range).
ISPRINT | checks if a character is printable (including spaces and printable ASCII characters).
STRLEN | calculates the length of a null-terminated string (excluding the null terminator).
MEMSET | sets a block of memory to a specified value.
BZERO | sets a block of memory to zero.
MEMCPY | copies a block of memory from one location to another.
MEMMOVE | moves a block of memory, handling overlapping regions correctly.
STRLCPY | copies a string into a destination buffer with a specified size, ensuring null-termination.
STRLCAT | appends a string to the end of a destination string, ensuring the result is null-terminated and fits within a specified size.
TOUPPER | converts a lowercase character to uppercase if applicable, otherwise it returns the same character.
TOLOWER | converts an uppercase character to lowercase if applicable, otherwise it returns the same character.
STRCHR | searches for the first occurrence of a specified character within a string and returns a pointer to it.
STRRCHR | searches for the last occurance of a specified character within a string and returns a pointer to it.
STRNCMP | compares two strings up to a specified number of characters and returns the comparison result.
MEMCHR | searches for the first occurrence of a specified byte value within a memory block and returns a pointer to it.
MEMCMP | compares two memory blocks up to a specified number of bytes and returns the comaprison result.
STRNSTR | searches for the first occurrence of a substring within a string, up to a specified number of characters.
ATOI | converts a string to an integer, discarding leading whitespace and stopping at the first non-digit character.
CALLOC | allocates and initializes a block of memory for an array, setting all bytes to zero.
STRDUP | creates a new string by duplicating an existing null-terminated string and returns a pointer to it.

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
