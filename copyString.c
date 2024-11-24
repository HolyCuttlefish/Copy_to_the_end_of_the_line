#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

	void strcatTest(char nullArray[], char text[])
	{
		uint32_t counter = 0, counterTwo = 0;

		while(nullArray[counter] != '\0') { counter++; }
		//while(nullArray[counter]) { counter++; }

		while((nullArray[counter++] = text[counterTwo++]) != '\0');
	}

	int main()
	{
		char array[12], arrayTwo[] = "Test message";

		strcatTest(array, arrayTwo);		

    printf("%s\n", array);

		return 0;
	}
