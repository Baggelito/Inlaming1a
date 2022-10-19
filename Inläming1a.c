#include <stdio.h>


// Gör subrationen mellan talen. 
double subtract( double a, 
				 double b,
				 double c)
{
	return c = a - b; // returnerar talet som c blir
}


int main()
{
	double a = 3.4;  // ger a värdet 3.4
	double b = 6.8; // ger b värdet 6.8
	double c = 0; // gör c till en float 
	
	
	printf("3.4 - 6.8 =%lg\n", subtract(a, b, c)); // skriver ut vad a - b = c är
	
	
	
	
	return;
}