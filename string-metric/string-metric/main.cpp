#include <iostream>

#include "jaccard.h"
#include "levenshtein_distance.h"

int main(int argc, char* argv[])
{
	std::string s1 = "SAMSUNG GXY A20 SM-A205G LTE AZUL";
	std::string s2 = "SAMSUNG GXY A20 AZUL SM-A205G LTE";

	jaccard jac;

	double index, distance;

	index = jac.index(s1, s2);
	distance = jac.distance(index);

	std::cout << "\n----------JACCARD----------\n\n";

	std::cout << "Jaccard Distance: " << distance << std::endl;


	std::cout << "\n\n\n----------LEVENSHTEIN----------\n\n";

	levenshtein_distance levenshtein;
	std::string s3 = "Car";
	std::string s4 = "Carro";

	int l_distance = levenshtein.distance(s3, s4);

	std::cout << "Levenshtein Distance: " << l_distance << std::endl;

	std::cout << "\n\n\n";
	system("pause");
	return 0;
}