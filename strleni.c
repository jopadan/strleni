#include "strleni.h"

int strleni(int i, int base)
{
	int len = 0;
	if(i < 0)
	{
		len++;
		i = -i;
	}

	len += base == 16 ? 2 : base == 8 ? 1 : 0;
	for(len; i > 0; i/=base, len++);

	return len;
}

