#include<stdio.h>
int main()
{
int day;
printf("enter the day of the week \n");
scanf("%d",&day);
switch(day)
{
	case 1:
		printf("sunday\n");
		break;
		case 2:
		printf("monday\n");
		break;
		case 3:
		printf("tuesday\n");
		break;
		case 4:
		printf("wenesday\n");
		break;
		case 5:
		printf("thursday\n");
		break;
		case 6:
		printf("friday\n");
		break;
		case 7:
		printf("sartuday\n");
		break;
		deafault:
			printf("Invalid\n");
			break;
}
return 0;
}

