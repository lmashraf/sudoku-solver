#include "stdafx.h"
#include "Cell.h"

Cell::Cell(void)
{
	cell_value = -1;
}

Cell::Cell(int n) throw(std::string)
{
	if(n < 0 || n > 9)
		throw "La valeur" + std::to_string(n) + "de la cellule doit etre comprise entre 1 et 9!\n";
	else
		cell_value = n;
}

Cell::~Cell(void)
{
}

bool Cell::IsEmpty()
{
	if(cell_value = -1)
		return true;
}

Cell& Cell::operator=(unsigned int iValue)
{
	this->cell_value = iValue;

	return *this;
}

Cell::operator unsigned int() const
{
	return cell_value;
}

bool Cell::operator==(unsigned int iValue) const
{
	return (this->cell_value == iValue);
}
