#include <stdio.h>
int main()
{
	char outcome;
	printf(" enter the outcome:\n");
	scanf("%c",&outcome);
	switch(outcome)
	{
		case 'E':
			case 'e':
			printf("Exceed Expectation.\n");
			break;
			case 'M':
				case 'm':
			printf("Exceed Expectation.\n");
			break;	
			case 'A':
				case 'a':
			printf("Exceed Expectation.\n");
			break;
			case 'B':
				case 'b':
			printf("Exceed Expectation.\n");
			break;
			default:
				printf("Enter a valid outcome.\n");
				break;
	}
	return 0;
}
