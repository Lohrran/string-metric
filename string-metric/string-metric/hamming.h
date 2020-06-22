#ifndef HAMMING_H
#define HAMMING_H

#include <cstring>

namespace string_metric 
{
	extern "C"
	{
		__declspec(dllexport) int hamming_distance(const char* s1, const char* s2);
	}
}
#endif