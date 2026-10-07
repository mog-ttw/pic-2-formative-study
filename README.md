# PIC 2 Formative Study

This project contains three C programs that solve separate practical problems. Each question is kept in its own file so the work is easier to follow and test.

## Project files
- question1.c
- question2.c
- question3.c
- q1.png
- q2.png
- q3.png
- q4.png

The screenshot files (q1.png, q2.png, q3.png, and q4.png) are included as proof of the working output for each question.

---

## Question 1: Water Quality Monitoring

This program calculates a water-quality index based on two inputs:
- temperature in degrees Celsius
- turbidity in NTU

### Short technical explanation covering (a), (b), and (c)

(a) The program computes the index by measuring how far the temperature is from the ideal value of 25.0 C and adding a turbidity penalty. The formula is:

- temperature deviation = |temperature - 25.0|
- turbidity penalty = turbidity / 2
- final index = 100 - (temperature deviation + turbidity penalty)

This means the index decreases when the water is too warm or when the water is cloudy.

(b) The `classifyWater()` function uses conditions to group the result into categories:
- index >= 80: "Good"
- index >= 60: "Warning"
- otherwise: "Critical"

(c) In `main()`, the program asks the user to enter the temperature and turbidity, calculates the index, and prints a full monitoring report with the final status.

### Proof image
The proof image for this question is saved as `q1.png`.

---

## Question 2: Mobile Money Transaction System

This program simulates a simple menu-based mobile money system.

### Brief explanation of how the program uses conditionals, loops, break, and continue

- Conditionals: the program uses `if` and `else` statements to check whether an amount is valid and whether the user has enough balance.
- Loops: the menu repeats using a `do...while` loop so the user can keep choosing transactions until they exit.
- `break`: used inside the `switch` cases to stop processing that case after the transaction is handled or rejected.
- `continue`: this program does not use `continue` because the menu logic is controlled by `break` and the loop condition instead.

The system supports:
- deposit
- withdrawal
- balance check
- transaction summary
- exit

### Proof image
The proof image for this question is saved as `q2.png`.

---

## Question 3: Delivery Distance Analysis

This program reads a list of route distances and performs several calculations on them.

### Brief explanation of how the program is divided into functions

The program is split into separate functions for clarity and reuse:
- `calculateTotal()` adds all route distances
- `calculateAverage()` finds the mean distance
- `findLongest()` finds the largest route distance
- `countAboveLimit()` counts how many routes are above a chosen threshold
- `recursiveSum()` calculates the total using recursion

The `main()` function handles input, calls these functions, and prints the final results.

### Brief explanation of how the recursive function works, including its base case

The recursive function is:

```c
int recursiveSum(int distances[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    return distances[n - 1] + recursiveSum(distances, n - 1);
}
```

How it works:
- The base case is `if (n == 0) return 0;`
- When `n` is greater than 0, it adds the last element of the array to the result of the same function called on the shorter array.
- This continues until the array length becomes zero, then the recursion stops.

### One advantage and one limitation of using recursion for this problem

Advantage:
- Recursion makes the logic simple and easy to read for problems that naturally break into smaller subproblems.

Limitation:
- Recursion can use a large amount of memory and may cause a stack overflow if the array is very large or the recursion depth becomes too deep.

### Proof image
The proof image for this question is saved as `q3.png`.

---

## Question 4: Car Parking Sensor Alert System

### Role of Components
The Ultrasonic sensor measures how far away a car is by bouncing sound waves off it. The Arduino Uno is the brain that runs the code to do the math and make decisions. The LEDs and Buzzer are actuators that give the user visual and audio feedback.

### Processing Data
The Arduino triggers a pulse on the `trigPin`, counts how long it takes to return on the `echoPin`, and divides by the speed of sound to get the distance in centimeters.

### Controlling Outputs
It compares the calculated distance to a hardcoded threshold of 50cm. If the distance is smaller, it writes a HIGH voltage to the Red LED and Buzzer pins, and LOW to the Green LED. If the distance is larger, it flips them.

### Proof image
The proof image for this question is saved as `q4.png`.

---

## Summary

This project is organized by question and each program is explained separately. The visual proof images are included in the folder so the results can be checked directly.
