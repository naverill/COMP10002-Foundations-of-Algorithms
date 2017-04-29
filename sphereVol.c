#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	double radius;
	double vol;
	printf("Enter a Radius: ");
	scanf("%lf", &radius);
	vol = (4.0/3.0)*acos(-1)*pow(radius,3);
	printf("When radius is %.2f metres, the volume of the sphere is %.2f metres cubed", radius, vol);
	return 0;
}