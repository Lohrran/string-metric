#ifndef LEVENSHTEIN_H
#define LEVENSHTEIN_H

#define MINIMUM(x, y) ((x) < (y) ? (x) : (y))

#include <cstring>

namespace string_metric
{
	extern "C"
	{
		__declspec(dllexport) int levenshtein_distance(const char* s1, const char* s2);
	}
}
#endif