// SudokuSolver.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "SudokuSolver.h"


// This is an example of an exported variable
SUDOKUSOLVER_API int nSudokuSolver=0;

// This is an example of an exported function.
SUDOKUSOLVER_API int fnSudokuSolver(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see SudokuSolver.h for the class definition
CSudokuSolver::CSudokuSolver()
{
	return;
}
