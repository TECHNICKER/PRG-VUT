#include "cv03.h"

int main()
{
	double time = 0;
	double distance = 0;

	printf("Zadejte rozdil hromu a blesku (v sekundach):\n");
	scanf("%d", &time);

	distance = (time * 0.340);

	printf("Vzdalenost bourky od vas je %lf km.", distance);

	return 0;
}
