# C-Calculator

The first project on my journey of learning the basics of C.
Just a simple console based calculator.

### How to use

Upon execution the program will ask you for any of the following operations:

  - "+" (addition)
  - "-" (subtraction)
  - "*" (multiplication)
  - "/" (division)

After you have provided your operation of choice it will prompt you to input the numbers you want to perform it on.
For division specifically there is an error message for divide by zero.
Finally it wil output the result.

### How does it work?

The user is asked for an operation stored as a char using "scanf".
A switch statement chooses the correct operation based on the provided char.
The user is asked to input two numbers, both stored as integers and used to calculate the result (float).
For division there is an additional if statement, checking for 0 in the divisor and (if the case) printing and error message.
And finally the result is provided.
