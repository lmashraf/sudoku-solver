#include "stdafx.h"
#include "Grid.h"


Grid::Grid(void)
{
}


Grid::~Grid(void)
{
}

Grid::Grid(Region regions[3][3])
{
	for(int c = 0; c < 3; c++)
	{
		for(int r = 0; r < 3; r++)
		{
			this->regions[c][r] = regions[c][r];
		}
	}
	
}

bool Grid::IsFull()
{
	bool IsFull = true;

	for(int c = 0; c < 3; c++)
	{
		for(int r = 0; r < 3; r++)
		{
			if ( !this->regions[c][r].IsFull() )
				IsFull = false;
		}
	}

	return IsFull;
}