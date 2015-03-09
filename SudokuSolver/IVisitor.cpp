#include "stdafx.h"
#include "IVisitor.h"


IVisitor::IVisitor(void)
{
}


IVisitor::~IVisitor(void)
{
}

bool IVisitor::Visit(Grid & ioGrid) const
{
	return ioGrid.Accept();
}