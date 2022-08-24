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
			base = atoi(argv[2]);

		printf("%d\n", strleni(atoi(argv[1]), base));
		exit(EXIT_SUCCESS);
	}

	
	printf("Usage: %s <integer> [base] - INTEGER_RANGE: %d-%d\n", argv[0], INT_MIN, INT_MAX);
	exit(EXIT_FAILURE);
}
