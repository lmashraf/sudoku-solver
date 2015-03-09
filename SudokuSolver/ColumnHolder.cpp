#include "stdafx.h"
#include "ColumnHolder.h"


ColumnHolder::~ColumnHolder(void)
{
}

Cell& ColumnHolder::G(void)
{
	return m_first_cell;
}

Cell& ColumnHolder::C(void)
{
	return m_second_cell;
}

Cell& ColumnHolder::D(void)
{
	return m_third_cell;
}
