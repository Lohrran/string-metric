#ifndef JACCARD_H
#define JACCARD_H

#include <string>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <set>



namespace string_metric
{
	extern "C"
	{
		__declspec(dllexport) double jaccard_distance(const char* s1, const char* s2);
	}

	double index(const std::string& s1, const std::string& s2);
	std::set<std::string> split(const std::string& s);
	std::set<std::string> intersection(std::set<std::string>& s1, std::set<std::string>& s2);
}
#endif