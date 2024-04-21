This is a mini project called "Rock Paper Scissor".
Usually we require minimum 2 people to play this game but here we have used C language to allow a person to play with his computer.
The main libraries used and their purpose is given below:
stdio.h -- standard printf and scanf functions
stdlib.h -- rand() and srand() functions are taken from this library
time.h -- time() function is taken from this library to give the current time.

Here we leran about the major application of rand() and srand() functions.
These functions are used to produce random numbers from [0,RAND_MAX).
rand() is a pseudo-random number generator and generates a pseudo-random number when it is called, whereas srand() function seeds a random generator and sets its intial state.

Following is the algorithm of the program:
1. Header files stdio.h, stdlib.h and time.h are declared.
2. Initially a function called game() is declared with a parameter 'char human' and defined.
3. Inside the function we use srand() function with the parameter time(NULL).
4. This initialises the random generator to the current time.
5. rand() function is used in the next expression.
6. In the expression the number 'a' generated is made sure that it is a two digit number.
7. Following conditions are defined using if else if ladder:
   a. If 'a' is between 0 and 33 it is considered a rock and message is printed.
   b. If 'a' is between 34 and 66 it is considered a scissor and message is printed.
   c. If 'a' is between 67 and 100 it is considered a paper and message is printed.
   For each of the condition the character 'comp' is given.
8. If else if ladder is again used to compare the characters 'human' and 'comp' and return values.
9. We create our main() function in the next step which does not return any value.
10. In the main function we provide appopriate messages to take the input from the user.
11. The game() function is called with 'human' as its argument and the output of the function is stored in the variable 'result'.
12. Based on the value of the variable 'result' the if else if ladder statements are used.
13. These if else if statements display appropriate messages.

An important concept that we need to take care is time() and clock() functions.
time() : The time() function returns the current time in seconds since the Unix epoch, which is January 1, 1970, 00:00:00 UTC. This function is typically used to measure the elapsed time between two events, such as the start and end of a program.
time() reports real time.

clock():The clock() function returns the amount of CPU time that has been used by the current process. This function is typically used to measure the performance of a program or algorithm.clock() reports CPU time.



