/* print temperature conversion
   using for
*/

#include <stdio.h>

int main()
{
	float fahr;

	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		printf("%3.1f %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
	}

	return 0;
}