#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

	void strcatTest(char *nullArray, char *text)
	{
		while(*nullArray){ nullArray++; }
		while((*(nullArray++) = *(text++)));
	}

	int main(void)
	{
		char array[12], arrayTwo[] = "Test message";

		strcatTest(array, arrayTwo);		

    printf("%s\n", array);

		return 0;
	}
