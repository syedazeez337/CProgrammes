/* print Fahrenheit - Celsius table
   for fahr = 0,20, ...., 300
*/

#include <stdio.h>

int main()
{
	int fahr, cels;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step  = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		cels = 5 * (fahr - 32) / 9;
		printf("%3d %6d\n", fahr, cels);
		fahr = fahr + step;
	}

	return 0;
}

/* Basic data types provided by C
   char   charater - a single byte
   short  short integer
   long   long integer
   doubel double precision floating point
*/