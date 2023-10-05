#include "cv03.h"

int main()
{
	float operand = 0;
	int operace = 0;
	float vysledek = 0;

	while (1)
	{
		printf("Zadejte cislo s nimz chcete pracovat:\n");
		scanf("%lf", &operand);

		printf("Vyberte operaci, kterou si s cislem prejete vykonat:\n1 - druhá mocnina\n2 - druhá odmocnina\n3 - zaokrouhlená hodnota\n4 - faktoriál ze zaokrouhlené hodnoty\n");
		scanf("%lf", &operace);

		if (operace < 1 or operace > 4)
		{
			printf("Neplatná operace.");
		}
		else {
			switch (operace)
			{
			case 1:
				vysledek = operand * operand;
				printf("Druha mocnina cisla %lf je %lf.", operand, vysledek);

			case 2:
				vysledek = pow(operand, 1 / 2);
				printf("Druha odmocnina cisla %lf je %lf.", operand, vysledek);

			case 3:
				vysledek = round(operand);
				printf("Cislo %lf zaokrouhlene je %lf.", operand, vysledek);

			case 4:
				vysledek = 1;
				for (int i = 1; i <= operand; i++)
				{
					vysledek = vysledek * i;
				}

				printf("Faktorial cisla %lf je %lf.", operand, vysledek);

			}
		}
	}

	return 0;
}