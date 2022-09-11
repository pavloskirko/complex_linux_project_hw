#include "lower_upper_header.h"
#include <string.h>

int convert_to_lower(char * str, int length)
{
	for(int i = 0; i < length; i++ )
	{
		if ( !strcmp(&str[i], "\n" ) )
		{
			printf("%s\n", str);
			return 0;
		}
		str[i] = tolower(str[i]);
	}
	return 1;
}

int convert_to_upper(char * str, int length)
{
	for(int i = 0; i < length; i++ )
	{
		if ( !strcmp(&str[i], "\n" ) )
		{
			printf("%s\n", str);
			return 0;
		}
		str[i] = toupper(str[i]);
	}
	return 1;
}
	