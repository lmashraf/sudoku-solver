#ifndef _GRID_H_
#define _GRID_H_

#include "SudokuSolver.h"
#include "Region.h"
#include "IVisitor.h"

class SUDOKUSOLVER_API Grid
{
	public:
		Region regions[9];

	public:
		Grid(Region[9]);
		Grid(void);
		~Grid(void);

	public:
		Region& getN();
		Region& getNE();
		Region& getNO();

		Region& getS();
		Region& getSE();
		Region& getSO();

		Region& getE();
		Region& getO();

		Region& getC();	

	public:
		bool IsFull();
		bool Accept() const;
};

#endif