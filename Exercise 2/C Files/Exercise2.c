#include <stdio.h>
#include <math.h>

double pi = 3.14159;
float radius = 7.154;

int main(){
    //does the calculation
    float circumference = pi*radius*2;
    int intCircumference = circumference;
    //initalize a double to write in scientific notation
    double doubleCircumference = 6.626*pow(10,(-34));
    
    //in the placeholder put %.2f cuts the float down to 2 decimal places
    printf("The radius of the circle with 2 decimal places: %.2f\n",radius);

    //%.3f makes the float only have 3 decimal places
    printf("The floating-point circumference with 3 decimal places: %.3f\n",circumference);

    printf("The integer-converted circumference as an integer: %d\n", intCircumference);

    //%e writes a double as scientific notation
    printf("Planck’s constant in scientific notation: %e",doubleCircumference);
    
    return 0;
}