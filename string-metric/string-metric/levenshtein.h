#ifndef LEVENSHTEIN_H
#define LEVENSHTEIN_H

#include <string>

#define MINIMUM(x, y) ((x) < (y) ? (x) : (y))

class levenshtein
{
	public:
		int distance(const std::string& s1, const std::string& s2);
};
#endif