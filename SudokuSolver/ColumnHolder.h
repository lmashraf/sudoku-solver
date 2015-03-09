#ifndef _COLUMNHOLDER_H_
#define _COLUMNHOLDER_H_

#include "SudokuSolver.h"
#include "TripleHolder.h"

class SUDOKUSOLVER_API ColumnHolder : public TripleHolder
{
	public:
		ColumnHolder(Cell& left, Cell& center, Cell& right) : TripleHolder(left, center, right) {};
		~ColumnHolder(void);

	public:
		Cell& G(void);
		Cell& C(void);
		Cell& D(void);
};

#endif