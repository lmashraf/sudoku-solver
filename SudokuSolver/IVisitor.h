#ifndef _IVISITOR_H_
#define _IVISITOR_H_

#include "SudokuSolver.h"

#include "Grid.h"

class Grid;

class SUDOKUSOLVER_API IVisitor
{
	public:
		IVisitor(void);
		~IVisitor(void);

		bool Visit(Grid & ioGrid) const;
};

#endif