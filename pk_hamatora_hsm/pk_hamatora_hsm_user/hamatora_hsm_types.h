/*=====================================================================================*/
/**
 * hamatora_hsm_types.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef HAMATORA_HSM_TYPES_H_
#define HAMATORA_HSM_TYPES_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/
typedef struct
{
   uint8_t current_state;
   uint8_t next_state;
   HSM_States_T * state_handler;
   uint8_t num_of_states;
}HSM_Machine_T;

typedef struct
{
   uint8_t state_id;
   void (*enter_state)(HSM_Machine_T *);
   void (*exit_state)(HSM_Machine_T *);
   bool (*guard_state)(HSM_Machine_T *);
} HSM_States_T;
/*=====================================================================================* 
 * hamatora_hsm_types.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*HAMATORA_HSM_TYPES_H_*/
