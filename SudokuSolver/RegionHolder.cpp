#include "stdafx.h"
#include "RegionHolder.h"

RegionHolder::~RegionHolder(void)
{}

Cell& RegionHolder::getN()
{
	return m_region.cells[CARDINAUX::N];
}

Cell& RegionHolder::getNE()
{
	return m_region.cells[CARDINAUX::NE];
}

Cell& RegionHolder::getNO()
{
	return m_region.cells[CARDINAUX::NO];
}

Cell& RegionHolder::getS()
{
	return m_region.cells[CARDINAUX::NO];
}

Cell& RegionHolder::getSE()
{
	return m_region.cells[CARDINAUX::SE];
}

Cell& RegionHolder::getSO()
{
	return m_region.cells[CARDINAUX::SO];
}

Cell& RegionHolder::getE()
{
	return m_region.cells[CARDINAUX::E];
}
Cell& RegionHolder::getO()
{
	return m_region.cells[CARDINAUX::O];
}

Cell& RegionHolder::getC()
{
	return m_region.cells[CARDINAUX::C];
}

RowHolder RegionHolder::TopRow()
{
	RowHolder row(m_region.cells[CARDINAUX::NO], m_region.cells[CARDINAUX::N], m_region.cells[CARDINAUX::NE]);
	
	return row;
}

RowHolder RegionHolder::MiddleRow()
{
	RowHolder row(m_region.cells[CARDINAUX::O], m_region.cells[CARDINAUX::C], m_region.cells[CARDINAUX::E]);

	return row;
}

RowHolder RegionHolder::BottomRow()
{
	RowHolder row(m_region.cells[CARDINAUX::SO], m_region.cells[CARDINAUX::S], m_region.cells[CARDINAUX::SE]);	

	return row;
}

ColumnHolder RegionHolder::LeftColumn()
{
	ColumnHolder column(m_region.cells[CARDINAUX::NO], m_region.cells[CARDINAUX::O], m_region.cells[CARDINAUX::SO]);

	return column;
}

ColumnHolder RegionHolder::MiddleColumn()
{
	ColumnHolder column(m_region.cells[CARDINAUX::N], m_region.cells[CARDINAUX::C], m_region.cells[CARDINAUX::S]);

	return column;
}

ColumnHolder RegionHolder::RightColumn()
{
	ColumnHolder column(m_region.cells[CARDINAUX::NE], m_region.cells[CARDINAUX::E], m_region.cells[CARDINAUX::SE]);

	return column;
}