# Libft
<p align="center"><img src="https://42wolfsburg.de/wp-content/uploads/2021/08/42wolfsburg_instagram_logo.jpeg" width="150" height="150" />

---
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

* ISALPHA -> checks if a character is an alphabetic character (a letter).
 
* ISDIGIT -> checks if a character is a digit (0-9).
 
* ISALNUM -> checks if a character is alphanumeric (a letter or a digit).

* ISASCII -> checks if a character is a valid ASCII character (0-127 range).
 
* ISPRINT -> checks if a character is printable (including spaces and printable ASCII characters).

* STRLEN -> calculates the length of a null-terminated string (excluding the null terminator).
 
* MEMSET -> sets a block of memory to a specified value.
 
* BZERO -> sets a block of memory to zero.
 
* MEMCPY -> copies a block of memory from one location to another.
 
* MEMMOVE -> moves a block of memory, handling overlapping regions correctly.
 
* STRLCPY -> copies a string into a destination buffer with a specified size, ensuring null-termination.

* STRLCAT -> appends a string to the end of a destination string, ensuring the result is null-terminated and fits within a specified size.
 
* TOUPPER -> converts a lowercase character to uppercase if applicable, otherwise it returns the same character.

* TOLOWER -> converts an uppercase character to lowercase if applicable, otherwise it returns the same character.
 
* STRCHR -> searches for the first occurrence of a specified character within a string and returns a pointer to it.
 
* STRRCHR -> searches for the last occurance of a specified character within a string and returns a pointer to it.
 
* STRNCMP -> compares two strings up to a specified number of characters and returns the comparison result.
 
* MEMCHR -> searches for the first occurrence of a specified byte value within a memory block and returns a pointer to it.
 
* MEMCMP -> compares two memory blocks up to a specified number of bytes and returns the comaprison result.
 
* STRNSTR -> searches for the first occurrence of a substring within a string, up to a specified number of characters.
 
* ATOI -> converts a string to an integer, discarding leading whitespace and stopping at the first non-digit character.
 
* CALLOC -> allocates and initializes a block of memory for an array, setting all bytes to zero.
 
* STRDUP -> creates a new string by duplicating an existing null-terminated string and returns a pointer to it.

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
|Parameters|<b>s1</b>: The prefix string. <b>s2</b>: The suffix string.
|Return value|The new string. NULL if the allocation fails.|
|External ft.|malloc|
|Description|Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.|
