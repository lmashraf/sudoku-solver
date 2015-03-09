#include "stdafx.h"
#include "LastCellFinder.h"

bool LastCellFinder::fill()
{
	bool result;
	int i = 0;

	
	if( m_first_holder.getFirstCell().IsEmpty() ) 
		i++;
	if( m_first_holder.getSecondCell().IsEmpty() ) 
		i++;
	if( m_first_holder.getThirdCell().IsEmpty() ) 
		i++;
	
	if( m_second_holder.getFirstCell().IsEmpty() ) 
		i++;
	if( m_second_holder.getSecondCell().IsEmpty() ) 
		i++;
	if( m_second_holder.getThirdCell().IsEmpty() ) 
		i++;
	
	if( m_third_holder.getFirstCell().IsEmpty() ) 
		i++;
	if( m_third_holder.getSecondCell().IsEmpty() ) 
		i++;
	if( m_third_holder.getThirdCell().IsEmpty() ) 
		i++;

	i < 2 ? (result = true) : (result = false);

	return result;
}


LastCellFinder::~LastCellFinder(void)
{
}
