#include "lower_upper_header.h"

#define MAX_LNGTH	256

int main()
{
	char str[MAX_LNGTH];
	printf("Please enter a text to convert to upper case \n");
	if (fgets( str, MAX_LNGTH, stdin) == NULL )
	{
		printf("Error: incorrect input.\n");
		return 1;
	}
	convert_to_upper(str, MAX_LNGTH);

	return 0;
}