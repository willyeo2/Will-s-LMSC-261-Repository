## Assignment 6 - Documentation
### Will Yeo
### LMSC 261
### March 9, 2020

1. What I Did:
- Our assignment this week was to build a "chessboard" of hashmarks with a length equal to a variable called "size" and a width equal to size/2. The position of the hashmarks on the board alternates with each line so that the odd numbered lines begin with a space and the even numbered lines begin with a hashmark.

2. How I Did It:
- Like last week, I struggled a while with syntax errors and because I didn't understand how to properly use strings in javaScript. With some help from a friend, however, I eventually realized how to use strings and concatenation to complete the problem.

3. The Problems I Faced:
- At first, I was at a complete loss at how to print multiple characters on a single line in javaScript. Fortunately, I happened to be working at the Studio Operations desk with my supervisor, Matt, who is in the computer science program at Tufts. He did the problem in C, but was also confused by our inability to print multiple characters on one line. We surmised that the solution must have something to do with strings, since that was one of our "hints".

4. How I Overcame Them:
-  After Matt completed the problem in C, he showed me how to use concatenation in a "for" loop to print the proper pattern on a single line. I translated his C code to javaScript, which looked like this:

                    let size = 8;
                    let pattern1 = "";
                    let pattern2 = "";
                    for (var i = 0; i < size / 2; i++){
                        pattern1 += " #";
                        pattern2 += "# ";
                      }
                    for (var j = 0; j < size; j++){
                        if ((i + j) % 2 == 0){
                          console.log(pattern1);
                        } else {
                          console.log(pattern2);
                      }
                    }

Matt's solution put me on the right path, but the "for" loops in his solution were not nested within each other, and it did not include a "\n" function, as specified in the "hints". After some agonizing and lots of trial and error, I eliminated the second variable from Matt's code and used a nested "for" loop to concatenate the " " and the "#" separately to the remaining variable.

5. What Code I Used From Elsewhere/Others:
- Credit to Matt Champlin in the Berklee Studio Operations office.
