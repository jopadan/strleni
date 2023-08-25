#include <stdio.h>
#include <stdlib.h>

#include "strleni.h"
#include "limits.h"

int main(int argc, char** argv)
{
	int base = 10;
	if(argc > 1)
	{
		if(argc > 2)
			base = clamp(strtouq(argv[2], NULL, 10), 0, UINT_MAX);
		int x = clamp(strtoq(argv[1], NULL, 10), INT_MIN, INT_MAX);

		uint8_t len = strlenid(x, base);
		switch(base)
		{
			case 8:
				printf("%o:%u\n", x, len);
				break;
			case 16:
				printf("%x:%u\n", x, len);
				break;
			case 10:
				printf("%d:%u\n", x, len);
				break;
			default:
				printf("Usage: %s <decimal integer> [target base] - INTEGER_RANGE: %d-%d\n", argv[0], INT_MIN, INT_MAX);
				exit(EXIT_FAILURE);
				break;
		}
		exit(EXIT_SUCCESS);
	}

	printf("Usage: %s <deciaml integer> [target base] - INTEGER_RANGE: %d-%d\n", argv[0], INT_MIN, INT_MAX);
	exit(EXIT_FAILURE);

}
