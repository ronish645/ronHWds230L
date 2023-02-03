#include <stdio.h>

int main(){
    int a[10],n; // Declare an array `a` of size 10 and a variable `n` to store the number of elements in the array
    int i, j, temp; // Variables for the loops and temporary storage during sorting

    printf("Enter how many values to store in array: "); // Prompt the user to input the number of values
    scanf("%d",&n); 
    printf("Enter values into array:");
    for(i=0;i<n;i++) // Loop to read `n` values from the user
    scanf("%d",&a[i]); // Read the `i`th value from the user and store it in the `i`th position of the array `a`

    printf("Before sorting: "); // Print the array before sorting
    for(i=0;i<n;i++) // Loop to print the array `a`
    printf("%d",a[i]);

    for(i=1;i<=n-1;i++){ // This loop performs `n-1` passes of sorting
        for(j=0;j<=n-1-i;j++){ // Inner loop to control comparisons in each pass
            if(a[j]>a[j+1]){ // Compare if current element is greater than next element
                temp = a[j]; // If the current element is greater, store it in a temporary variable
                a[j] = a[j+1]; // Swap the elements
                a[j+1] = temp; // Replace the current element with the next element
            }
        }
    }

    printf("\nAfter sorting: "); // Print the array after sorting
    for(i=0;i<n;i++) // Loop to print the sorted array
    printf("%d",a[i]);

    return 0;
}
