#include <stdio.h>

int main(){
    int a[10],n;                // Declare an array of 10 integers and a variable n
    int i, j, temp;              // Declare variables for loops and temporary storage

    printf("Enter how many values to store in array: ");   // Prompt the user to enter the number of values to store in the array
    scanf("%d",&n);
    printf("Enter values into array:");                    
    for(i=0;i<n;i++)                    // Loop to input the values of the array
        scanf("%d",&a[i]);
    
    for(i=1;i<=n-1;i++){              // Loop for number of passes (n-1 no. of passes)
        for(j=0;j<=n-1-i;j++){       // Inner loop to control comparison in each pass
            if(a[j]>a[j+1]){         // Compare if current element is greater than next element
                temp = a[j];         // Swap the elements if the current element is greater
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("After sorting, output sequence: \n");    // Output the sorted array
    for (int i = 0; i < n; i++) {                          
        if (a[i] % 2 != 0) {                  // Check if the element is odd
            printf("%d\n", a[i]);             // Print the odd element
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {             // Check if the element is even
            printf("%d\n", a[i]);        // Print the even element
        }
    }

    return 0;                                              
}
