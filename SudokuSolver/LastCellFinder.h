#ifndef _LASTCELLFINDER_H_
#define _LASTCELLFINDER_H_

#include "SudokuSolver.h"

#include "TripleHolder.h"

class SUDOKUSOLVER_API LastCellFinder
{
	public:
		LastCellFinder(TripleHolder h1, TripleHolder h2, TripleHolder h3) : m_first_holder(h1), m_second_holder(h2), m_third_holder(h3) {};
		~LastCellFinder(void);

		bool fill();

	private:
		TripleHolder m_first_holder;
		TripleHolder m_second_holder;
		TripleHolder m_third_holder;
};

#endif

