#include <stdio.h>


// G�r subrationen mellan talen. 
double subtract( double a, 
				 double b,
				 double c)
{
	return c = a - b; // returnerar talet som c blir
}


int main()
{
	double a = 3.4;  // ger a v�rdet 3.4
	double b = 6.8; // ger b v�rdet 6.8
	double c = 0; // g�r c till en float 
	
	
	printf("3.4 - 6.8 =%lg\n", subtract(a, b, c)); // skriver ut vad a - b = c �r
	
	
	
	
	return;
}