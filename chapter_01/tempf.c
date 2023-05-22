/* print temperature conversions using
   floating point precision using float
*/

#include <stdio.h>

int main()
{
	float fahr, cels;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step  = 20;

	fahr = lower;
	while(fahr <= upper)
	{
		cels = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.2f\n", fahr, cels);
		fahr = fahr + step;
	}

	return 0;
}

/*  %d    print as decimal integer
    %6d   print as decimal with 6 characters wide
    %f    print as floating point
    %6f   print as floating point with 6 characters wide
    %.2f  print as floating point with 2 characters after decimal point
    %6.2f print 6 characters wide and 2 characters after decimal point

    printf recognises %o as octal
    %x as hexadecimal
    %c for character
    %s for string
    %% for % itself
*/