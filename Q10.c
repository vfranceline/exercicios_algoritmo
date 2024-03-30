#include <stdio.h>

float entrada, positivos, negativos, soma_positivos, soma_negativos;

int main ()
{
  positivos = 0;
  negativos = 0;

  while (1)
	{
	  scanf ("%f", &entrada);

	  if (entrada > 0)
		{
		  positivos = positivos + 1;
		  soma_positivos = soma_positivos + entrada;
		}

	  if (entrada < 0)
		{
		  negativos = negativos + 1;
		  soma_negativos = soma_negativos + entrada;
		}

	  if (entrada == 0)
		{
		  printf ("\n Positivos: %.1f", positivos);
		  printf ("\n Negativos: %.1f", negativos);
		  printf ("\n Soma dos números positivos: %.2f", soma_positivos);
		  printf ("\n Soma dos números negativos: %.2f", soma_negativos);
		  break;
		}
	}
}
