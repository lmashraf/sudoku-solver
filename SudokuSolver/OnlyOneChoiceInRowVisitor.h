#ifndef _ONLYONECHOICEINROWVISITOR_H_
#define _ONLYONECHOICEINROWVISITOR_H_

#include "SudokuSolver.h"
#include "IVisitor.h"

class SUDOKUSOLVER_API OnlyOneChoiceInRowVisitor : public IVisitor
{
	public:
		OnlyOneChoiceInRowVisitor(void);
		~OnlyOneChoiceInRowVisitor(void);

		virtual bool OnlyOneChoiceInRowVisitor::Visit(Grid & ioGrid) const;
};

#endif

