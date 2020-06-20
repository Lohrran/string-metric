#include "levenshtein.h"

int levenshtein::distance(std::string& s1, std::string& s2)
{
	int* dist = new int[s2.length() + 1];

	if (s1.length() == 0 || s2.length() == 0)
	{
		return 0;
	}

	for (int i = 0; i <= s2.size(); i++)
	{
		dist[i] = i;
	}

	for (int i = 0; i <= s1.length() - 1; i++)
	{
		dist[0] = i + 1;
		int insertion = i;

		for (int j = 0; j <= s2.length() - 1; j++)
		{
			int deletion = dist[j + 1];

			if (s1[i] == s2[j])
			{
				dist[j + 1] = insertion;
			}
			else
			{
				dist[j + 1] = MINIMUM(MINIMUM(deletion, insertion), dist[j]) + 1;

			}
			insertion = deletion;
		}
	}

	int distance = dist[s2.length()];

	delete[] dist;

	return distance;
}