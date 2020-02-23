## Assignment 4 - Documentation
### Will Yeo
### LMSC 261
### February 22, 2020

1. What I Did:
- For our Week 4 assignment, we had to modify the thinkoutside.c program from our class GitHub repository in order to produce a pyramid of hash marks increasing by one every line for 8 lines.
2. How I Did It:
- I started off by testing different values for integers "i" and "j", then compiling and running the program from terminal to identify which parameters they controlled. Using this method, I realized that setting the value "int i" was being tested against determined how many times the printf("\n") command would run, and therefore determine how many rows would be printed. Changing the value "int j" was being tested against determined how many times the printf("#") command would run and print a hashmark.
3. The Problems I Faced:
- At first, I wasn't completely sure how to make the hashmarks increment by one after each new line. I eventually realized that by setting "int j" to be less than the number of new lines ("int i"), the program would print one less hashmark than there were new lines, incrementing them as intended. However, this also caused the program to print one blank line at the beginning, which was not in the example.
4. How I Overcame Them:
- My initial solution was to set "int j" to be less than "int i + 1". That got rid of the extraneous line, but, as my teacher expertly noted, this took an extra step that could potentially drain CPU. I removed the step of adding 1 to "int j" by setting the initial value of "int i" to 1. This eliminated the line and saved valuable processing power.
5. What Code I Used From Elsewhere/Others:
- I did not use any outside code for this project. 
