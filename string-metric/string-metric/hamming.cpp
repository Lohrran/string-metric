#include "hamming.h"

int hamming::distance(std::string& s1, std::string& s2)
{
	int distance = 0;
	
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] != s2[i])
		{
			distance++;
		}
	}
	return distance;
}