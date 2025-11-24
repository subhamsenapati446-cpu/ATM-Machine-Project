# ATM-Machine-Project
ATM Machine functions
![image alt](https://github.com/subhamsenapati446-cpu/ATM-Machine-Project/blob/main/output%20pg1%20.png)
![image alt](https://github.com/subhamsenapati446-cpu/ATM-Machine-Project/blob/main/output%20pg%202.png)
I used the C programming language to implement the ATM system.

Why C Language?

Fast and Efficient: C provides high performance, which is useful for real-time systems like ATM operations.

Structured Programming: ATM operations (login, withdraw, deposit) can be grouped into functions easily.
Libraries Used

#include <stdio.h>

stdio.h → Handles input and output functions such as
printf() → display messages
scanf() → take user input

no extra libraries are needed for a simple ATM simulation.

Functions Used

(a) atmMachine()

This is the main function that:

Handles PIN authentication

Displays ATM menu

Performs operations (balance check, withdraw, deposit)

Uses a loop to allow repeated usage


(b) main()

Calls the atmMachine() function.

1. Conditional Statements – if, else

Used to verify the PIN and check whether withdrawal amount is valid.

2. Switch Case

Used to create an ATM menu:
Case 1 → check balance
Case 2 → withdraw
Case 3 → deposit
Case 4 → exit

3. Looping – do while
Allows the menu to repeat until the user selects Exit.

5. Variables
Used to store:
pin → correct PIN
enteredPin → user input
balance → account balanc
amount → deposit or withdraw

SYSTEM WORKING FEATURES :-

✔ Feature 1: PIN Authentication

The user must enter the correct PIN (e.g., 1234).

If the PIN is wrong → access denied → program stops.

✔ Feature 2: Check Balance

Shows the current account balance.

✔ Feature 3: Withdraw Money

User enters withdrawal amount.

System checks:

If withdrawal amount > balance → Reject

Else → Update balance after withdrawal

✔ Feature 4: Deposit Money

Adds entered amount to the existing balance.

Displays updated balance.

✔ Feature 5: Repeated Menu (Looping)

The menu keeps showing again and again until the user selects Exit.


✔ Feature 6: Exit System

Stops the ATM program safely.












 
