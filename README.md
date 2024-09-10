[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/p6syoTQ3)
# Pointers Assignment

## Overview
In this assignment, you will work with pointers in C to manipulate data. You will implement functions that utilize pointers to swap integers, find the maximum value in an array, and reverse the contents of an array. This assignment will help you practice using pointers for direct memory manipulation and array traversal.

## Tasks
You are required to complete the following tasks:

### 1. Swap Two Integers
- **Function**: `void swap(int *a, int *b);`
- **Description**: Implement this function to swap the values of two integers using pointers.
- **Test Case**: The test swaps `x = 5` and `y = 10` and checks if the values are correctly swapped.

### 2. Find the Maximum Value in an Array
- **Function**: `int findMax(int *arr, int length);`
- **Description**: This function traverses an array using a pointer and returns the maximum value found in the array.
- **Test Case**: The array `{3, 1, 4, 1, 5, 9, 2, 6, 5}` has a maximum value of `9`.

### 3. Reverse an Array
- **Function**: `void reverseArray(int *arr, int length);`
- **Description**: This function reverses the elements in an array using pointers.
- **Test Case**: The array `{1, 2, 3, 4, 5}` should be reversed to `{5, 4, 3, 2, 1}`.

## How to Complete the Assignment

1. **Open the provided `hello.c` file**:
   - The file contains function prototypes and test cases. Your task is to complete the three TODO sections: `swap`, `findMax`, and `reverseArray`.

2. **Complete the functions**:
   - Fill in the missing code using pointers to accomplish each task.
   - You **must not** use array indexing (e.g., `arr[i]`), but rather pointer dereferencing and pointer arithmetic.

3. **Test your code**:
   - The program includes automatic test cases for each function. When you run the program, it will print whether each test passed or failed.
   
4. **Run the test script**:
   - A `test.sh` script is provided to compile and run your program automatically. It will check for the correct output and tell you if all tests pass.

## Running the Tests

### Option 1: Manual Compilation

1. **Compile the program**:
   ```bash
   gcc -o hello hello.c
2.	**Run the program**:
   ./hello
3.	**The program will output whether each test case passed or failed. If all tests pass, you can submit the assignment**.

**Expected Output:**

**For all tests to pass, you should see the following output:**
testSwap PASSED
testFindMax PASSED
testReverseArray PASSED
All tests passed!


Good Luck!