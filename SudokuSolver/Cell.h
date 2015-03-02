#ifndef _CELL_H_
#define _CELL_H_

#include "SudokuSolver.h"

class SUDOKUSOLVER_API Cell
{
	public:
		int cell_value;

	public:
		Cell(void);
		Cell(int n) throw(std::string);
		~Cell(void);

	public:
		bool IsEmpty();

		Cell& operator=(unsigned int iValue);
		operator unsigned int() const;
		bool operator==(unsigned int iValue) const;

};

#endif

