/* write a programme to print the 
   corresponding Celsius to Fahrenheit table
*/

#include <stdio.h>

int main()
{
	float fahr, cels;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step  = 20;

    cels = lower;
	while(fahr <= upper)
	{
		fahr = cels * (9.0 / 5.0) + 32.0;
		printf("%3.1f %6.2f\n", cels, fahr);
		cels = cels + step;
	}

	return 0;
}