Algorithm: Smallest_Number_After_Removing_K_Digits

1. Input a number as a string (num) and an integer (k).
2. Initialize an empty stack (st) to store digits.
3. Iterate through each digit of the input number:
     a. Convert the character digit to an integer.
     b. While the stack is not empty, the top element of the stack is greater than the current digit, and k is greater than 0:
          i. Pop elements from the stack.
          ii. Decrement k.
     c. Push the current digit onto the stack.
4. If k is still greater than 0 after the loop, pop remaining elements from the stack to meet the requirement of removing k digits.
5. Reverse the stack to get the smallest possible number.
6. Print the elements of the stack to obtain the smallest number after removing k digits.
