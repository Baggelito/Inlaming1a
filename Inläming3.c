#include <stdio.h>

// Gör dividerar mellan talen. 
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
	double voltage = 3.4;  // ger a värdet 3.4
	double current = 6.8; // ger b värdet 6.8
	double resistance = 0; // gör c till en float 

	divistion(&voltage, &current, &resistance);

	electrical_print(voltage, current, resistance);

	return;
}	