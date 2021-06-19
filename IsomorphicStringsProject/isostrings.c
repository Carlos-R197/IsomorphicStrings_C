#include "isostrings.h"
#include <stdbool.h>
#include <string.h>

bool areIsomorphic(char strOne[], char strTwo[])
{
	if (strlen(strOne) != strlen(strTwo))
		return false;
	
	int m1[256] = {0};
	int m2[256] = {0};
	int i, n = strlen(strOne);
	for (i = 0; i < n; i++)
	{
		char c1 = strOne[i];
		char c2 = strTwo[i];
		if (m1[c1] != m2[c2])
			return false;
		m1[c1] = i + 1;
		m2[c2] = i + 1;
	}
}