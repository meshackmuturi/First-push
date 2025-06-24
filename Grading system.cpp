#include <stdio.h>
int main(){
	int marks;
	printf("enter the students marks\n");
	scanf ("%d",&marks);
	if(marks>=75 && marks <=100)
	{printf("the grade is A");}
	else if(marks>=60 && marks <75){
	printf(" the grade is B");
	}
	else if  (marks>=50 &&marks<60)
	{printf("the grade is C");
	}
	else if (marks >=40 && marks <50)
	{printf("the grade is D");
	}
	else if  (marks>=0 &&marks<40)
		{printf("the grade is E");
	}
	else
	{printf(" the marks is imposible!");
	}
	return 0;
	
	
}
