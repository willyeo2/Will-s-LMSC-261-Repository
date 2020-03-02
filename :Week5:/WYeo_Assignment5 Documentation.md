## Assignment 5 - Documentation
### Will Yeo
### LMSC 261
### March 2, 2020

1. What I Did:
- Our Week 5 assignment was to solve the  "FizzBuzz" exercise, which apparently is a classic coding skills test. The object of the exercise is to create a counter which prints every integer between 1 and 100, except for integers divisible by 3, which cause the counter to print "Fizz", integers divisible by 5, which cause the counter to print "Buzz", and integers divisible by both 3 and 5, which cause the counter to print "FizzBuzz".
2. How I Did It:
- I am not going to lie. I struggled for a long time over this one. When I first read the problem, I tried to isolate the different sections of the problem by creating a counter that incremented up by 1. When I couldn't do that, I realized I needed to become more familiar with the javaScript syntax, so I spent several hours taking the first several Codeacademy javaScript courses. I was still floundering even after the Codeacademy courses, however, and I was starting to irritate my girlfriend with my frustration. She searched for "FizzBuzz" in Google and came upon the solution in a Codeacademy forum. I was so invested at this point that I didn't want to see the answer, but eventually it got too late, and my girlfriend got too cranky, so I took the answer from Codeacademy. For shame.  
3. The Problems I Faced:
- The "Hints" in the assignment directions threw me off on this one. I assumed early on that I would need to create a "for" loop similar to the previous assignment in order to make the counter increment. The directions stated, however, that we would "need three if/else blocks chained together", which I took to mean we should *only* use three if/else blocks chained together. Even when I used a "for" loop however, I wasn't familiar enough with the javaScript syntax (and basic math, I suppose) to set the conditions of the if/else statements properly. For example my conditions for the if/else statements read:
4. How I Overcame Them:
- My initial solution was to set "int j" to be less than "int i + 1". That got rid of the extraneous line, but, as my teacher expertly noted, this took an extra step that could potentially drain CPU. I removed the step of adding 1 to "int j" by setting the initial value of "int i" to 1. This eliminated the line and saved valuable processing power.
5. What Code I Used From Elsewhere/Others:
- I did not use any outside code for this project.
