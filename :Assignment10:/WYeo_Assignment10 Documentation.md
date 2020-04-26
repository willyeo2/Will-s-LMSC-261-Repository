## Assignment 10 - Documentation
### Will Yeo
### LMSC 261
### April 26, 2020

1. What I Did:
Our assignment this week was to complete the "Foursquare" assignment which involved printing a pattern with four squares using a Python Script. I completed the problem using a combination of loops, "if/else" statements and the python functions we learned about in class two weeks ago.

2. How I Did It:
First, I defined five variables. Four of them are strings that represent each of the characters in the pattern ("+ ","- ","| ", and " " ) and one is an indexing variable for the "while" loops in each function.
Next, I created two functions consisting of "if/else" statements nested inside of a "while" loop that iterate up to 11. The first function, "print_line1" printed the horizontal lines with this pattern:

                          + - - - - + - - - - +

The first argument in the function sets the counter equal to zero, which is necessary because the functions themselves are iterated later in a loop. The second argument contains a print statement which prints a blank string in order to move the cursor to the next line. Next, the "if/else" statements in the function instruct the console to print the string "+ " if the index variable modulo 5 is equal to 0 and to print "- " if it is not. The second function, "print_line2" is structured the same, except that the strings are "| " and " " printing this pattern:

                            |         |         |

After I defined both functions, I created another indexing variable, "count", set it equal to 0, and then used another "while" loop containing both functions that iterates 11 times. This "while" loop also contains nested "if/else" statements that run the "print_line1" function when the counter module 5 is equal to 0 and "print_line2" when it is not. When the loop iterates, each function is printed on a new line, thanks to the print "" command in each function.

3. The Problems I Faced:

With the benefit of a few months of coding practice, my solution came together much more smoothly and without having to search Stack Overflow for help. I came up with a quicker answer in class that used longer strings that contained an entire line, i.e. "+ - - - - + - - - - +", but I figured that would be cheating. I also wondered if I should be using more function definitions, since the hints mention a solution with eight.

I did have at least two hiccups. Before I created the functions, I nested the "inner" while loops that print each line directly in the "outer" while loop that prints the lines vertically. This caused the loop to only iterate once because the index variable had not been reset to 0.

Once I figured that out, the next problem was that each iteration of the "outer" loop printed on the same line, so that my console looked like this:

                  + - - - - + - - - - + |         |         ||         |         ||         |         |

...etc, etc.

4. How I Overcame Them:

By creating functions that reset the index variable to 0 after each iteration, I was able to get the "outer" while loop to iterate all 11 times and print the entire pattern. In order to move the cursor to the next line after each "inner" loop, I placed the "print("")" argument at the beginning of each function.

5. What Code I Used From Elsewhere/Others:

None.
