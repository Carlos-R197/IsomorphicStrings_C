#include "bdd-for-c.h"
#include "isostrings.h"
#include <stdbool.h>

spec("Test if given strings are isomorphic")
{
	it("Check if two empty strings are isomorphic")
	{
		check(areIsomorphic(" ", " ") == true);
	}
	
	it("Check if two letters are isomorphic")
	{
		check(areIsomorphic("a", "b") == true);
	}
	
	it("Should return false since foo and bar aren't isomorphic")
	{
		check(areIsomorphic("foo", "bar") == false);
	}
	
	it("Should return true since egg and add are isomorphic")
	{
		check(areIsomorphic("egg", "add") == true);
	}
	
	it("Should return false since paper and titles aren't isomorphic")
	{
		check(areIsomorphic("paper", "titles") == false);
	}
}
