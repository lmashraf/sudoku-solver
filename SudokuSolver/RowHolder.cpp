#include "stdafx.h"
#include "RowHolder.h"

RowHolder::~RowHolder(void)
{
}

Cell& RowHolder::G(void)
{
	return m_first_cell;
}

Cell& RowHolder::C(void)
{
	return m_second_cell;
}

Cell& RowHolder::D(void)
{
	return m_third_cell;
}