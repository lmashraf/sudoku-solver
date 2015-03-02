// TestSudoku.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <exception>
#include <iostream>
#include <string>

#include "Cell.h"
#include "Region.h"

#pragma comment(lib, "SudokuSolver.lib") 

int _tmain(int argc, _TCHAR* argv[])
{
	try
	{
		Cell c1;
		Cell c2(5);

		Region r1();
		Region r2("482---15-");

		for(int i = 0; i<9; i++)
		{
			std::cout<<r2.cells[i].cell_value<<std::endl;
		}
	}
	catch(std::string msg)
	{
		std::cout << "Exception capturée:" << std::endl << msg;
	}

	system("PAUSE");
	return 0;
}

