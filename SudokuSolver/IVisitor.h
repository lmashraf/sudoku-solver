#ifndef _IVISITOR_H_
#define _IVISITOR_H_

#include "SudokuSolver.h"
#include "Grid.h"

class SUDOKUSOLVER_API IVisitor
{
	public:
		IVisitor(void);
		~IVisitor(void);

		virtual bool Visit(Grid & ioGrid) const;
};

#endif