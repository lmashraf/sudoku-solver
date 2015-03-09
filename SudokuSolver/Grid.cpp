#include "stdafx.h"
#include "Grid.h"


Grid::Grid(void)
{}


Grid::~Grid(void)
{
}

Grid::Grid(Region regions[9])
{
	for(int c = 0; c < 9; c++)
	{
			this->regions[c] = regions[c];
	}
	
}

bool Grid::IsFull()
{
	bool IsFull = true;

	for(int c = 0; c < 9; c++)
	{
		if ( !this->regions[c].IsFull() )
			IsFull = false;
	}

	return IsFull;
}

bool Grid::Accept() const
{
	return true;
}

Region& Grid::getN()
{
	return this->regions[CARDINAUX::N];
}

Region& Grid::getNE()
{
	return this->regions[CARDINAUX::NE];
}
Region& Grid::getNO()
{
	return this->regions[CARDINAUX::NO];
}

Region& Grid::getS()
{
	return this->regions[CARDINAUX::S];
}

Region& Grid::getSE()
{
	return this->regions[CARDINAUX::SE];
}

Region& Grid::getSO()
{
	return this->regions[CARDINAUX::SO];
}

Region& Grid::getE()
{
	return this->regions[CARDINAUX::E];
}

Region& Grid::getO()
{
	return this->regions[CARDINAUX::O];
}

Region& Grid::getC()
{
	return this->regions[CARDINAUX::C];
}