#include <iostream>

#include "jaccard.h"
#include "levenshtein.h"
#include "hamming.h"

int main(int argc, char* argv[])
{
	std::string s1 = "Blue House";
	std::string s2 = "House Blue";

	double index, distance;

	jaccard jac;
	levenshtein lev;
	hamming ham;


	std::cout << "\n----------WORDS----------\n\n";
	std::cout << "\t" << s1 << ", " << s2 << "\n\n";

	index = jac.index(s1, s2);
	distance = jac.distance(index);
	std::cout << "Jaccard Distance: " << distance << std::endl;


	distance = lev.distance(s1, s2);
	std::cout << "Levenshtein Distance: " << distance << std::endl;


	distance = ham.distance(s1, s2);
	std::cout << "Hamming Distance: " << distance << std::endl;


	std::cout << "\n\n\n";
	system("pause");
	return 0;
}