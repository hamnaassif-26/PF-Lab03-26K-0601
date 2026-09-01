#include <stdio.h>
int main()
{
	int age;
	float height;
	
	printf("Enter your age and height:");
	scanf("%d %f",&age,&height);
	
	printf("You are %d years old and %.2f meters tall.",age,height);
	return 0;
}
