#include <stdio.h>

// G�r dividerar mellan talen. 
void divistion(double* x,
				double* y,
				double* z)
{
	*z = *x / *y;

	return;
}

void electrical_print(double x, 
					  double y, 
				   	  double z)
{
	printf("--------------------------------\n");
	printf("Voltage: %lg V\n", x);
	printf("Current: %lg mA\n", y);
	printf("Resistance: %lg kOhm\n", z);
	printf("--------------------------------\n");
	return;
}


int main()
{
	double voltage = 3.4;  // ger a v�rdet 3.4
	double current = 6.8; // ger b v�rdet 6.8
	double resistance = 0; // g�r c till en float 

	divistion(&voltage, &current, &resistance);

	electrical_print(voltage, current, resistance);

	return;
}	