#include <stdio.h>
#include <stdlib.h>

#include "strleni.h"

int main(int argc, char** argv)
{
	int base;
	if(argc > 1)
	{
		if(argc > 2)
			base = atoi(argv[2]);

		printf("%d\n", strleni(atoi(argv[1]), base));
		exit(EXIT_SUCCESS);
	}

	printf("Usage: %s <integer> [base]\n", argv[0]);
	exit(EXIT_FAILURE);
}
