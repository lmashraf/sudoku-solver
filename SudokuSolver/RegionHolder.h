#ifndef _REGIONOLDER_H_
#define _REGIONOLDER_H_

#include "SudokuSolver.h"

#include "RowHolder.h"
#include "ColumnHolder.h"

#include "Region.h"

class SUDOKUSOLVER_API RegionHolder
{
	public:
		RegionHolder(Region& region) : m_region(region) {};
		~RegionHolder(void);

	public:
		Cell& getN();
		Cell& getNE();
		Cell& getNO();

		Cell& getS();
		Cell& getSE();
		Cell& getSO();

		Cell& getE();
		Cell& getO();

		Cell& getC();		

	public:	
		RowHolder TopRow();
		RowHolder MiddleRow();
		RowHolder BottomRow();

		ColumnHolder LeftColumn();
		ColumnHolder MiddleColumn();
		ColumnHolder RightColumn();

	protected:
		Region& m_region;
};

#endif