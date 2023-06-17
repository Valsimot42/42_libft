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
  <h4><b>• ISALPHA •</b></h4></p>

The isalpha() function tests for any character for which isupper(3) or islower(3) is true. The value of the argument must be representable as an unsigned char or the value of EOF. The isalpha() function returns zero if the character tests false and returns non-zero if the character tests true.

```ruby
#include <stdio.h>

int main() {
    char ch = 'C';
    int result = isalpha(ch);

    printf("Return value of isalpha: %d\n", result);
    return 0;
}
```

<h4><b>• ISDIGIT •</b></h4></p>

The isdigit() function tests for a decimal digit character.  Regardless of locale, this includes the following characters only: {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}. The value of the argument must be representable as an unsigned char or the value of EOF. The isdigit() and isnumber() functions return zero if the character tests false and return non-zero if the character tests true.

```ruby
#include <stdio.h>

int main() {
    char ch = '7';
    int result = isdigit(ch);

    printf("Return value of isdigit: %d\n", result);
    return 0;
}
```

<h4><b>• ISALNUM •</b></h4></p>

The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true. The value of the argument must be representable as an unsigned char or the value of EOF. The isalnum() function returns zero if the character tests false and returns non-zero if the character tests true.

```ruby
#include <stdio.h>

int main() {
    char ch = '9';
    int result = isalnum(ch);

    printf("Return value of isalnum: %d\n", result);
    return 0;
}
```

<h4><b>• ISASCII •</b></h4></p>
The isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.

```ruby
#include <stdio.h>

int main() {
    char ch = '!';
    int result = isascii(ch);

    printf("Return value of isascii: %d\n", result);
    return 0;
}
```
