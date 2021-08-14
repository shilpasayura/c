/* C Program to Check Leap Year */

#include<stdio.h>


void main()
{
    
    int yr;
     //clrscr should be used after variable declaration.
    
    printf("\n Enter year:");
    scanf("%d",&yr);
    if (yr%4==0){
		printf("\n leap year");
    }
	else
    {
        printf("\n not a leap year");
    }
    
}
