## Assignment 5 - Documentation
### Will Yeo
### LMSC 261
### March 2, 2020

1. What I Did:
- Our Week 5 assignment was to solve the  "FizzBuzz" exercise, which apparently is a classic coding skills test. The object of the exercise is to create a counter which prints every integer between 1 and 100, except for integers divisible by 3, which cause the counter to print "Fizz", integers divisible by 5, which cause the counter to print "Buzz", and integers divisible by both 3 and 5, which cause the counter to print "FizzBuzz".
2. How I Did It:
- I am not going to lie. I struggled for a long time over this one. When I first read the problem, I tried to isolate the different sections of the problem by creating a counter that incremented up by 1. When I couldn't do that, I realized I needed to become more familiar with the javaScript syntax, so I spent several hours taking the first several Codeacademy javaScript courses. I was still floundering even after the Codeacademy courses, however, and I was starting to irritate my girlfriend with my frustration. She searched for "FizzBuzz" in Google and came upon the solution in a Codeacademy forum. I was so invested at this point that I didn't want to see the answer, but eventually it got too late, and my girlfriend got too cranky, so I took the answer from Codeacademy. For shame.  
3. The Problems I Faced:
- The "Hints" in the assignment directions threw me off on this one. I assumed early on that I would need to create a "for" loop similar to the previous assignment in order to make the counter increment. The directions stated, however, that we would "need three if/else blocks chained together", which I took to mean we should *only* use three if/else blocks chained together. Even when I used a "for" loop however, I wasn't familiar enough with the javaScript syntax (and basic math, I suppose) to set the conditions of the if/else statements properly. For example, my conditions for the if/else statement to print "FizzBuzz" read:

      `if (counter % 3 = 0 && counter % 5 = 0)`

This generated an "Invalid left-hand side in assignment" error in the console. I assume this is either because I failed to used parentheses around the modulo operations, or because I used a single "=" sign instead of the required 3 "===".
4. How I Overcame Them:
- As I mentioned previously, I eventually surrendered and looked up the solution my girlfriend found on the Codeacademy forum. In fairness, however, I don't think I understood enough about "for" loops to have gotten it myself. I didn't understand how to properly nest an "if/else" statement within the loop. Even if I had, my incorrect syntax would have  kept me from doing it properly.   
5. What Code I Used From Elsewhere/Others:
- I found the solution on the Codeacademy.com forums. The link to the exact thread can be found [here](https://www.codecademy.com/forum_questions/4f97524f1a89c30003000a62).
