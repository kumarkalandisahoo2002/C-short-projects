//checking a triangle is equilateral,isosceles or scalene
#include <stdio.h>
 
int main(void)
{
	int a,b,c;
	//taking sides of the triangle
	printf("Enter the length of the triangle(a,b,c):\n");
	scanf("%d%d%d",&a,&b,&c);

	//core logic implimentation
	if ((a==b) && (b==c))
		printf("The triangle having sides %d %d & %d is a equilateral triangle.",a,b,c);
	else if(a==b || b==c || c==a)
		printf("The triangle having sides %d %d & %d is a isosceles triangle.",a,b,c);
	else
		printf("The triangle having sides %d %d & %d is a scalene triangle.",a,b,c);

	return 0;
}

