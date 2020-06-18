#ifndef JACCARD_H
#define JACCARD_H

#include <string>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <set>


class jaccard
{
	public:
		double index(const std::string& s1, const std::string& s2);
		double distance(double& index);

	private:
		std::set<std::string> split(const std::string& s);
		std::set<std::string> intersection(std::set<std::string>& s1, std::set<std::string>& s2);
};
#endif