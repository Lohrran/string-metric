#ifndef LEVENSHTEIN_H
#define LEVENSHTEIN_H

#include <string>

#define MINIMUM(x, y) ((x) < (y) ? (x) : (y))

class levenshtein
{
	public:
		int distance(std::string &s1, std::string &s2);
};
#endif