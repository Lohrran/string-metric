#include <iostream>

#include "jaccard.h"
#include "levenshtein.h"
#include "hamming.h"
#include "sorensen_dice_coefficient.h"

int main(int argc, char* argv[])
{
	std::string s1 = "Blue House";
	std::string s2 = "Blue House";

	double  distance;
	
	std::cout << "\n----------WORDS----------\n\n";
	std::cout << "\t" << s1 << ", " << s2 << "\n\n";


	distance = string_metric::jaccard_distance(s1.c_str(), s2.c_str());
	std::cout << "Jaccard Distance: " << distance << std::endl;
	
	distance = string_metric::levenshtein_distance(s1.c_str(), s2.c_str());
	std::cout << "Levenshtein Distance: " << distance << std::endl;

	distance = string_metric::hamming_distance(s1.c_str(), s2.c_str());
	std::cout << "Hamming Distance: " << distance << std::endl;

	distance = string_metric::dice_coefficient(s1.c_str(), s2.c_str());
	std::cout << "Sorensen Dice Coefficient: " << distance << std::endl;


	std::cout << "\n\n\n";
	system("pause");
	return 0;
}