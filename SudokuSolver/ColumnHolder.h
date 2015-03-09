#ifndef _COLUMNHOLDER_H_
#define _COLUMNHOLDER_H_

#include "SudokuSolver.h"
#include "TripleHolder.h"

class SUDOKUSOLVER_API ColumnHolder : public TripleHolder
{
	public:
		ColumnHolder(void);
		~ColumnHolder(void);
};

#endif