#include<stdio.h>
#include<math.h>
double checkTri(double x, double y, double z);
double area(double x, double y, double z);

int main()
{
	double x, y, z;
	printf("Input side lenght of triangle (follow this pattern : 3 4 5) : ");
	scanf("%lf %lf %lf", &x, &y, &z);
	if ( checkTri(x,y,z) == 1)
	{
		printf("Area of Scalene triangle : %.5lf", area(x,y,z));
	}
	else if (checkTri(x, y, z) == 0)
	{
		printf("Your input can't made Triangle");
	}

	return 0;
}

double checkTri(double x, double y, double z) {
	if ( x+y>z && y+z>x && x+z>y && x>0 && y>0 && z>0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

double area(double x, double y, double z) {
	double s, area;
	s = (x + y + z) / 2;
	area = sqrt(s*(s - x)*(s - y)*(s - z));
	return area;
}
