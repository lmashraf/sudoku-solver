// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the SUDOKUSOLVER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// SUDOKUSOLVER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SUDOKUSOLVER_EXPORTS
#define SUDOKUSOLVER_API __declspec(dllexport)
#else
#define SUDOKUSOLVER_API __declspec(dllimport)
#endif

// Required headers
#include <iostream>
#include <exception>
#include <string>
#include <vector>

// This class is exported from the SudokuSolver.dll
#ifndef _SUDOKUSOLVER_H_
#define _SUDOKUSOLVER_H_
class SUDOKUSOLVER_API CSudokuSolver {
public:
	CSudokuSolver(void);
	// TODO: add your methods here.
};
#endif;

extern SUDOKUSOLVER_API int nSudokuSolver;

SUDOKUSOLVER_API int fnSudokuSolver(void);
