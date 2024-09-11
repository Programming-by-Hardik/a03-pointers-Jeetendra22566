
    #include <stdio.h>
#include <stdbool.h>

// Function prototypes
void swap(int *a, int *b);
int findMax(int *arr, int length);
void reverseArray(int *arr, int length);

// Test functions
bool testSwap();
bool testFindMax();
bool testReverseArray();

int main() {
    // Run tests
    if (testSwap()) {
        printf("testSwap PASSED\n");
    } else {
        printf("testSwap FAILED\n");
    }

    if (testFindMax()) {
        printf("testFindMax PASSED\n");
    } else {
        printf("testFindMax FAILED\n");
    }

    if (testReverseArray()) {
        printf("testReverseArray PASSED\n");
    } else {
        printf("testReverseArray FAILED\n");
    }

    return 0;
}

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;  // Store the value at address a in temp
    *a = *b;        // Assign the value at address b to address a
    *b = temp;      // Assign the stored value (temp) to address b
}

// Function to find the maximum value in an array using pointers
int findMax(int *arr, int length) {
    if (length <= 0) {
        return -1; // Return -1 for invalid length
    }

    int max = arr[0];  // Assume the first element is the max
    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger value is found
        }
    }
    return max;
}

// Function to reverse an array using pointers
void reverseArray(int *arr, int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap the elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

// Test case for swap function
bool testSwap() {
    int x = 5, y = 10;
    swap(&x, &y);

    if (x == 10 && y == 5) {
        return true;
    } else {
        return false;
    }
}

// Test case for findMax function
bool testFindMax() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int maxValue = findMax(arr, length);

    if (maxValue == 9) {
        return true;
    } else {
        return false;
    }
}

// Test case for reverseArray function
bool testReverseArray() {
    int arr[] = {1, 2, 3, 4, 5};
    int expected[] = {5, 4, 3, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, length);

    // Check if the array matches the expected reversed array
    for (int i = 0; i < length; i++) {
        if (arr[i] != expected[i]) {
            return false;
        }
    }
    return true;
}