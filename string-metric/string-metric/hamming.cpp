#include "hamming.h"

extern "C" __declspec(dllexport) int string_metric::hamming_distance(const char* s1, const char* s2)
{

	int len = strlen(s1);
	int distance = 0;

	for (int i = 0; i < len; i++)
	{
		if (s1[i] != s2[i])
		{
			distance++;
		}
	}
	return distance;
}