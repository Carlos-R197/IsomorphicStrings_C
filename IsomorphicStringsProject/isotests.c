#include "bdd-for-c.h"
#include "isostrings.h"
#include <stdbool.h>

spec("Test if given strings are isomorphic")
{
	it("Check if two empty strings are isomorphic")
	{
		check(areIsomorphic(" ", " ") == true);
	}
}
