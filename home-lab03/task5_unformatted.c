#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	char alpha[50];
	printf("Enter a character:");
	ch = getchar(); // unformatted--> var_name=getchar();-->used instead of scanf()
	
	printf("You entered:");
	putchar(ch); // getchar() inputted and putchar displayed the value, putchar(var_name)
	putchar('\n'); // printing nextline should be in ''.
	
	getchar(); /* without this, the newline character is existing.fgets() below askin me to type
	              and when it checks a buffer existing so it gets that it is the input.
			so it finishes not letting me to type.*/
					
	printf("Enter your full name:\n");
	fgets(alpha, 50, stdin);
	printf("Your name is:");
	puts(alpha);
	return 0;	
}
