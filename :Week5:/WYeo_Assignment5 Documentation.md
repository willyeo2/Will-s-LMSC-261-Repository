## Assignment 5 - Documentation
### Will Yeo
### LMSC 261
### March 2, 2020

1. What I Did:
- Our Week 5 assignment was to solve the  "FizzBuzz" exercise, which apparently is a classic coding skills test. The object of the exercise is to create a counter which prints every integer between 1 and 100, except for integers divisible by 3, which cause the counter to print "Fizz", integers divisible by 5, which cause the counter to print "Buzz", and integers divisible by both 3 and 5, which cause the counter to print "FizzBuzz".
2. How I Did It:
- 
3. The Problems I Faced:
- At first, I wasn't completely sure how to make the hashmarks increment by one after each new line. I eventually realized that by setting "int j" to be less than the number of new lines ("int i"), the program would print one less hashmark than there were new lines, incrementing them as intended. However, this also caused the program to print one blank line at the beginning, which was not in the example.
4. How I Overcame Them:
- My initial solution was to set "int j" to be less than "int i + 1". That got rid of the extraneous line, but, as my teacher expertly noted, this took an extra step that could potentially drain CPU. I removed the step of adding 1 to "int j" by setting the initial value of "int i" to 1. This eliminated the line and saved valuable processing power.
5. What Code I Used From Elsewhere/Others:
- I did not use any outside code for this project.
