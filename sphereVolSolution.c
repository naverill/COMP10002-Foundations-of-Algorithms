/*Calculate the volume of the sphere given its radius - Solution 8?
*/
#include <stdio.h>

#define PI 3.141592654
#define VOLUME_PAR_1 4.0
#define VOLUME_PAR_2 3.0

int main(int argc, char *argv[]) {
	double radius, volume;
	printf("Enter the sphere radius: ");
	scanf("%lf", &radius);
	volume = (VOLUME_PAR_1*PI*radius*radius*radius)/VOLUME_PAR_2;
	printf("When the radius is %.2f metres, ", radius);
	printf("volume is %.2f cubic metres\n", volume);
	return 0;
}