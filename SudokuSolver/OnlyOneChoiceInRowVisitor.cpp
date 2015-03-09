#include "stdafx.h"
#include "OnlyOneChoiceInRowVisitor.h"


OnlyOneChoiceInRowVisitor::OnlyOneChoiceInRowVisitor(void)
{
}


OnlyOneChoiceInRowVisitor::~OnlyOneChoiceInRowVisitor(void)
{
}

bool OnlyOneChoiceInRowVisitor::Visit(Grid & ioGrid) const
{
	return ioGrid.Accept();
}