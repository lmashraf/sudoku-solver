#ifndef _TRIPLEHOLDER_H_
#define _TRIPLEHOLDER_H_

#include "SudokuSolver.h"
#include "Cell.h"

class SUDOKUSOLVER_API TripleHolder
{
	public:
		TripleHolder(Cell& first_cell, Cell& second_cell, Cell& third_cell) : m_first_cell(first_cell), m_second_cell(second_cell), m_third_cell(third_cell) {};
		~TripleHolder(void) {};

	public:
		Cell& getFirstCell(void);
		Cell& getSecondCell(void);
		Cell& getThirdCell(void);

	protected:
		Cell& m_first_cell;
		Cell& m_second_cell;
		Cell& m_third_cell;
};

#endif