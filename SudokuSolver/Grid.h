#ifndef _GRID_H_
#define _GRID_H_

#include "SudokuSolver.h"
#include "Region.h"

class SUDOKUSOLVER_API Grid
{
	public:
		Region regions[3][3];

	public:
		Grid(Region[3][3]);
		Grid(void);
		~Grid(void);

	public:
		bool IsFull();
};

#endif