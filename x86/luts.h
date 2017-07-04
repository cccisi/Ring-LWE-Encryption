/*
 * luts.h
 *
 *  Created on: Jul 3, 2014
 *      Author: rdeclerc
 */

#ifndef _LUTS_H_
#define _LUTS_H_

#include <stdint.h>

extern int psi[];
extern int inv_psi1[];
extern int inv_psi2[];
extern int inv_psi3[];
extern unsigned char  lut1[];
extern unsigned char lut2[];
extern int pmat[55][109];
extern uint32_t pmat_cols_small_low2[];
extern uint32_t pmat_cols_small_high2[];
extern uint32_t pmat_cols_small_high3[];

extern uint16_t primrt_table[];
extern uint16_t omega_table[];
extern uint16_t primrt_omega_table[];
extern uint16_t primrt_inv_omega_table[];



#endif /* LUTS_H_ */
