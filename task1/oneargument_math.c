#include "oneargument_math.h"

int fact(int a)
{
	if (a > 0)
		return a * fact(a - 1);
	else
		return 1;
}

double my_sqrt(int a)
{
	double sqrt = a / 2;
	double temp = 0;
	while (sqrt != temp) // Initially temp is 0 and sqrt = num  
    {  
        temp = sqrt; // assign sqrt to temp  
          
        sqrt = ( a / temp + temp) / 2;  
     }   
     return sqrt;
}