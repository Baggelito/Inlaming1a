#include <stdio.h>

// G�r subrationen mellan talen. 
void subtract(double* x,
				double* y,
				double* z)
{
	*z = *x - *y;

	return;
}


int main()
{
	double a = 3.4;  // ger a v�rdet 3.4
	double b = 6.8; // ger b v�rdet 6.8
	double c = 0; // g�r c till en float 

	subtract(&a, &b, &c);

	printf("%lg - %lg = %lg\n", a, b, c); // skriver ut vad a - b = c �r




	return;
}