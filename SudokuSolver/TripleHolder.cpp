#include "stdafx.h"
#include "TripleHolder.h"


Cell& TripleHolder::getFirstCell(void)
{
	return m_first_cell;
}

Cell& TripleHolder::getSecondCell(void)
{
	return m_second_cell;
}

Cell& TripleHolder::getThirdCell(void)
{
	return m_third_cell;
}