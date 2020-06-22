#include "levenshtein.h"

extern "C" __declspec(dllexport) int string_metric::levenshtein_distance(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	int* dist = new int[len2 + 1];

	if (len1 == 0 || len2 == 0)
	{
		return 0;
	}

	for (int i = 0; i <= len2; i++)
	{
		dist[i] = i;
	}

	for (int i = 0; i <= len1 - 1; i++)
	{
		dist[0] = i + 1;
		int insertion = i;

		for (int j = 0; j <= len2 - 1; j++)
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

	int distance = dist[len2];

	delete[] dist;

	return distance;
}