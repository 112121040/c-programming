#include<stdio.h>
#include<stdlib.h>
//main function
int main() 
{
	//Variable Decleration
	int choice;
	float r ,circle,side,square;
	while(choice != 3)
	{
	printf("Press 1 for area of circle\n");
	printf("Press 2 for area of square\n");
	printf("Press 3 to CY@\n");
	scanf("%d", &choice);
	
	if(choice==1) 
	{
		printf("Enter the radius.\n\n");
		scanf("%f", &r);
		circle = 3.14*r*r;
		printf("Area of circle is %f\n", circle);
	}
	else if(choice==2)
	{
	   	printf("Enter a side.\n");
		scanf("%f", &side);
		square = side*side;
		printf("Area of square is %f\n", square);
	}
    else if(choice==3)
    {
        printf("=======================\n=======================\n=======================\n");
    }
    else
    {
		printf("you entered incorrect choice.\n");
    }

	}

}
