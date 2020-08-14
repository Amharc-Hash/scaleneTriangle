#include<stdio.h>
#include<math.h>
int checkTri(float x, float y, float z);
float area(float x, float y, float z);

int main()
{
	float x, y, z;
	printf("Input side lenght of triangle (follow this pattern : 3 4 5) : ");
	scanf("%f %f %f", &x, &y, &z);
	if ( checkTri(x,y,z) == 1)
	{
		printf("Area of Scalene triangle : %.2f", area(x,y,z));
	}
	else if (checkTri(x, y, z) == 0)
	{
		printf("Your input can't made Triangle");
	}

	return 0;
}

int checkTri(float x, float y, float z) {
	if ( x+y>z && y+z>x && x+z>y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

float area(float x, float y, float z) {
	float s,area;
	s = (x + y + z) / 2;
	area = sqrt(s*(s - x)*(s - y)*(s - z));
	return area;
}
