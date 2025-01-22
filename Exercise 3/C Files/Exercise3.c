#include <stdio.h>

void main(){
    //Floating-Point Values
    float float1 = 5.234;
    float float2 = 7.7806;

    printf("Floats - %f & %f\n",float1,float2);
    float reuseTemp = float1+float2;//calclate sum
    printf("Sum:\n\t%.2f\n",reuseTemp);//prints sum

    reuseTemp = float1-float2;//caculates difference
    printf("Difference:\n\t%.2f\n",reuseTemp);

    reuseTemp = float1*float2;//caculates product
    printf("Product:\n\t%.2f\n",reuseTemp);

    reuseTemp = float1/float2;//caculates quotient
    printf("Quotient:\n\t%.2f\n",reuseTemp);


    //Arithmetic Operators
    int int1 = 95;
    int int2 = 13;

    printf("\n\nInts - %d & %d\n",int1,int2);
    int reuseInt= (int1%int2);//caculates modulus
    printf("Modulo:\n\t%d\n",reuseInt);


    //Character Data Type
    char letter = 'A';
    printf("\n\nChar - %c\n",letter);
    printf("ASCII value:\n\t%d\n",letter);


    //Input and Output with printf() and scanf()
    int scanInt;
    float scanFloat;

    printf("\n\nEnter an Int: ");
    scanf("%d",&scanInt);
    printf("Enter a Float: ");
    scanf("%f",&scanFloat);

    printf("\nUser entered:\n\tInt - %d\n\tFloat - %f\n",scanInt,scanFloat);


    //Increment/Decrement Operations
    reuseInt = 1;

    printf("\n\nOperated Number - %d\n",reuseInt);
    printf("Post-Increment Operation - %d\n",reuseInt++);
    printf("\tAfter execution - %d\n",reuseInt);
    reuseInt = 1; //reset the int for the pre-increment because it will be at 2
    printf("Pre-Increment Operation - %d\n",++reuseInt);
    printf("\tAfter execution - %d\n",reuseInt);

    
    //Logical Operators
    printf("\nCheck if an intager is even or odd");
    printf("Enter an intager: ");
    scanf("%d",&reuseInt);

    if(reuseInt%2==0){
        printf("%d is even!\n",reuseInt);
    } else {
        printf("%d is odd!\n",reuseInt);
    }

}