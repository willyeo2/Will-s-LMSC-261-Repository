#include <stdio.h>
/* ^^ This line tells the program to include the stdio.h library */

int main(void) {
/* ^^ This line includes the main function,
 which is the entry point of the program. */

 printf("Error 404.\a\n");
 /* ^^ The "printf" command instructs the
 computer to display a string of characters
 on the screen. */
 printf("Haiku not found.\a\n");
 /* ^^ The "\a" is an escape sequence, which
 generates an alert sound. */
 printf("Try again later.\a\n");
 /* ^^ The "\n" is another escape sequence,
 which shifts the cursor to a new line. */
 return 0;
/* ^^ Returning 0 tells the program it has
successfully finished executing. */

}
