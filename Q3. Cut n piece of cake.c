#include <stdio.h>
#include <math.h>

int main()
{
    int n, r;   //declare two variables.
    printf("Enter how many cuts you want: ");  //Prompt the user to enter how many cuts to be made.
    scanf("%d",&n);         //Example:  n = 2, 2**2=4
    r = pow(2,n);          //Use pow()function to perfrom 2**n.
    
    printf("Your pieces will be %d",r);
    return 0;        //End the program.
    
}
