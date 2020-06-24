#include "sorensen_dice_coefficient.h"

extern "C" __declspec(dllexport) double string_metric::dice_coefficient(const char* s1, const char* s2)
{
	double dice = string_metric::calculate_coefficient(s1, s2);

	return dice;
}

double string_metric::calculate_coefficient(std::string s1, std::string s2)
{
	if (s1.empty() || s2.empty())
		return 0;

	if (s1 == s2)
		return 1;

	std::set<std::string> s1_bigrams;
	std::set<std::string> s2_biagrams;


	for (int i = 0; i < (s1.length() - 1); i++)
	{
		s1_bigrams.insert(s1.substr(1, 2));
	}

	for (int i = 0; i < (s2.length() - 1); i++)
	{
		s1_bigrams.insert(s2.substr(1, 2));
	}
	
	int intersection = 0;

	for (std::set<std::string>::iterator it = s2_biagrams.begin(); it != s2_biagrams.end(); it++)
	{
		intersection += s1_bigrams.count((*it));
	}

	return (double)(intersection * 2) / (double)(s1_bigrams.size() + s2_biagrams.size());
}
