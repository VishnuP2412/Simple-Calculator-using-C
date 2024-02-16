//Program to do simple calculations
#include<stdio.h>
#include<stdlib.h>
void main()
{
    //Varaible to store the operands
    float a, b;
    //variable to choose the type of operation
    char ch;
    printf("Enter first number: ");
    //Reading the first number
    scanf("%f", &a);
    printf("\nEnter second number: ");
    //Reading the second number
    scanf("%f", &b);
    operation:
    printf("\nEnter the operation to be done(+,-,*,/): ");
    //used here to remove the input buffer
    ch=getc(stdin); //could also use while((getchar())!='\n');
    //Read the choice of operation
    ch=getc(stdin);
    switch(ch)
    {
        //If the choice is +
        case('+'):printf("\n%f",(a+b));break;
        //If the choice is -
        case('-'):printf("\n%f",(a-b));break;
        //If the choice is *
        case('*'):printf("\n%f",(a*b));break;
        //If the choice is /
        case('/'):printf("\n%.2f",(float)(a/b));break;
        //If the choice is anything other than those four
        default:printf("\nInvalid Choice. Enter again");goto operation;
    }
}