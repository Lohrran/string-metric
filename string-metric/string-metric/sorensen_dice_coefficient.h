#ifndef SORENSEN_DICE_COEFFICIENT_H
#define SORENSEN_DICE_COEFFICIENT_H

#include <set>
#include <string>

namespace string_metric
{
	extern "C"
	{
		__declspec(dllexport) double dice_coefficient(const char* s1, const char* s2);
	}
	double calculate_coefficient(std::string s1, std::string s2);
}
#endif