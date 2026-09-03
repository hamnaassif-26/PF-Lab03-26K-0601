#include <stdio.h>
#include <conio.h>
#include <stdbool.h> // library for bool data type
int main()
{
	int h = 2345;
	float r = 89.780;
	char delta = 'N';
	double num = 4.45453457543776;
	bool user_active; // checks 1 of 2 possibilities
	int status;
	
	printf("The number is: %i \n",h);
	printf("The decimal value is: %.3f \n",r);
	printf("The character is: %c \n",delta);
	printf("The double value is: %lf \n",num);
	printf("Enter your Account Status (1 for true / 0 for false): "); // 1,0 --> into bool 
	scanf("%d",&status);
	user_active=status; // status answer assigned to bool: true or false form	
	if(status)
	{
		printf("Your bank account status: true \n");
       }
       else
	{
		printf("Your bank account status: false \n");
       }
	printf("Size of Data types are: \n");
	printf("h=%zu \n",sizeof(h));
	printf("r=%zu \n",sizeof(r));
	printf("delta=%zu \n",sizeof(delta));
	printf("num=%zu \n",sizeof(num));
	printf("user_active=%zu \n",sizeof(user_active));
	getch();
	return 0;
}
	
	
