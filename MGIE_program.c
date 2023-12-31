/************************************/
/* Author		: Ali Azzouz		*/
/* SWC			: MGIE				*/
/* Layer		: MCAL			    */
/* Version		: 1.0				*/
/* Date			: December 22,2023	*/
/* Last Edit	: N/A			 	*/
/************************************/
#include "LBIT_math.h"
#include "LSTD_types.h"

#include "MGIE_private.h"
#include "MGIE_interface.h"

void MGIE_voidEnableGI(void)
{
	SET_BIT(SREG,I_BIT);
}
void MGIE_voidDisnableGI(void)
{
	CLEAR_BIT(SREG,I_BIT);
}