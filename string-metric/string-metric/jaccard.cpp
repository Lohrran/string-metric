#include "jaccard.h"

extern "C" __declspec(dllexport) double string_metric::jaccard_distance(const char* s1, const char* s2)
{
	double ind = string_metric::index(s1, s2);

	// Return Jaccard Distance calculating using the below formula
	return 1 - ind;
}

double string_metric::index(const std::string& s1, const std::string& s2)
{
	// Divide both String by white space.
	std::set<std::string> ss1 = split(s1);
	std::set<std::string> ss2 = split(s2);

	// Get the intersection set, all the elements that match between the strings
	std::set<std::string> intersect = intersection(ss1, ss2);

	// Return Jaccard Index calculating using the below formula 
	return static_cast<double>(intersect.size()) / (ss1.size() + ss2.size() - intersect.size());
}

std::set<std::string>string_metric::split(const std::string& s)
{
	std::set<std::string> splited;

	std::istringstream iss1(s);
	for (std::string s; iss1 >> s;)
	{
		splited.insert(s);
	}

	return splited;
}

std::set<std::string>string_metric::intersection(std::set<std::string>& s1, std::set<std::string>& s2)
{
	std::set<std::string> intersect;

	// Intersect between the sets to get different elements.
	std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), std::inserter(intersect, intersect.begin()));

	return intersect;
}