#include <stdio.h>

// Define the countOnes function that takes an integer argument n
int countOnes(int n) {
    // Initialize a variable count to keep track of the number of ones
    int count = 0;
    // Repeat the following block until n becomes 0
    while (n) {
        // Increment count if the least significant bit of n is 1
        count += n & 1;
        // Shift the bits of n to the right by 1 place, effectively dividing n by 2
        n >>= 1;
    }
    // Return the final count
    return count;
}

// The main function
int main() {
    // Read a decimal number from the user
    int decimal;
    printf("Enter decimal number: ");
    scanf("%d", &decimal);
    // Call the countOnes function to calculate the number of ones in the decimal number
    int ones = countOnes(decimal);
    // Print the result
    printf("There are %d ones in the given decimal number\n", ones);
    // Return 0 to indicate success
    return 0;
}
