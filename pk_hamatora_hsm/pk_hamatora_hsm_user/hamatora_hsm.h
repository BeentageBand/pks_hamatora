/*=====================================================================================*/
/**
 * hamatora_hsm.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef HAMATORA_HSM_H_
#define HAMATORA_HSM_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "hamatora_hsm_types.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported X-Macros
 *=====================================================================================*/
#define HSM_State_Def(prev_state, next_state, guard_current, exit_current, enter_next) \
{prev_state, next_state, guard_current, exit_current, enter_next},
/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/
namespace hsm
{
/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/
void Process_State(HSM_Machine_T * machine, HSM_States_T);
void Set_Next_State(HSM_Machine_T * machine, uint8_t next_state);
/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/
}
/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/
#define Hamatora_HSM_Statechart_Array(statechart) statechart(HSM_State_Def)
/*=====================================================================================* 
 * hamatora_hsm.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*HAMATORA_HSM_H_*/
