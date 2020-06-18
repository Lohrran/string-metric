#ifndef LEVENSHTEINDISTANCE_H
#define LEVENSHTEINDISTANCE_H

#include <string>

#define MINIMUM(x, y) ((x) < (y) ? (x) : (y))

class levenshtein_distance
{
	public:
		int distance(const std::string& s1, const std::string& s2);
};
#endif