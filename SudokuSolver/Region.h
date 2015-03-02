#ifndef _REGION_H_
#define _REGION_H_

#include "SudokuSolver.h"
#include "Cell.h"

enum CARDINAUX
{
	NO,	N, NE,
	O,  C, E,
	SO, S, SE
};

class SUDOKUSOLVER_API Region
{
	public:
		Cell cells[9];

	public:
		Region(void);
		Region(std::string);
		~Region(void);

	public:
		bool IsFull();
};

#endif