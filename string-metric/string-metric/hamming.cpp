#include "hamming.h"

int hamming::distance(const char* s1, const char* s2)
{
	int index = 0;
	int distance = 0;
	while (s1[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			distance++;
		}
		index++;
	}
	return distance;
}