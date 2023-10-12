#include "cv03.h"

/*int main()
{
	double time = 0;
	double distance = 0;

	printf("Zadejte rozdil hromu a blesku (v sekundach):\n");
	scanf("%d", &time);

	distance = (time * 0.340);

	printf("Vzdalenost bourky od vas je %lf km.", distance);

	return 0;
}*/


int main()
{
	double operand = 0;
	int operace = 0;
	double vysledek = 0;

	while (1)
	{
		printf("Zadejte cislo s nimz chcete pracovat:\n");
		scanf("%lf", &operand);

		printf("Vyberte operaci, kterou si s cislem prejete vykonat:\n1 - druha mocnina\n2 - druha odmocnina\n3 - zaokrouhlena hodnota\n4 - faktorial ze zaokrouhlene hodnoty\n");
		scanf("%d", &operace);

		if (operace < 1 or operace > 4)
		{
			printf("Neplatna operace.\n");
		}
		else {
			switch (operace)
			{
			case 1:
				vysledek = operand * operand;
				printf("Druha mocnina cisla %lf je %lf.\n", operand, vysledek);

			case 2:
				vysledek = sqrt(operand);
				printf("Druha odmocnina cisla %lf je %lf.\n", operand, vysledek);

			case 3:
				vysledek = round(operand);
				printf("Cislo %lf zaokrouhlene je %lf.\n", operand, vysledek);

			case 4:
				vysledek = 1;
				for (int i = 1; i <= round(operand); i++)
				{
					vysledek = vysledek * i;
				}

				printf("Faktorial zaokrouhleneho cisla %lf z cisla %lf je %lf.\n", round(operand), operand, vysledek);

			}
		}
	}

	return 0;

}
