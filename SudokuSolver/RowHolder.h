#ifndef _ROWHOLDER_H_
#define _ROWHOLDER_H_

#include "SudokuSolver.h"
#include "TripleHolder.h"

class SUDOKUSOLVER_API RowHolder : public TripleHolder
{
	public:
		RowHolder(void);
		~RowHolder(void);
};

#endif

