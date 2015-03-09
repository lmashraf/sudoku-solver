#ifndef _ROWHOLDER_H_
#define _ROWHOLDER_H_

#include "SudokuSolver.h"
#include "TripleHolder.h"

class SUDOKUSOLVER_API RowHolder : public TripleHolder
{
	public:
		RowHolder(Cell& left, Cell& center, Cell& right) : TripleHolder(left, center, right) {};
		~RowHolder(void);

	public:
		Cell& G(void);
		Cell& C(void);
		Cell& D(void);
};

#endif

