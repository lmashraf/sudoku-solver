#include "stdafx.h"
#include "Region.h"


Region::Region(void)
{
}

Region::Region(std::string region_values)
{
	if(region_values.length() != 9)
	{
		throw "La définition de la région est invalide!";
	}
	else
	{
		int i = 0;

		for(char& c : region_values)
		{
			if(c < '9' && c > '0')
			{
				this->cells[i] = Cell (c - '0');
			}
			else if(c == '-')
			{
				this->cells[i] = Cell();
			}
			else
			{
				throw "La chaine de caractère contient un caracètre invalide!";
			}

			++i;
		}
	}
    
}

Region::~Region(void)
{
}

bool Region::IsFull()
{
	bool IsFull = true;

	int i = 0;
	while(i < 9)
	{
		if( cells[i].IsEmpty() )
			IsFull = false;
	}

	return IsFull;
}
