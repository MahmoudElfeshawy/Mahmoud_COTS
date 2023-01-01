/**************************************************************/
/**************************************************************/
/*********		Author: MAHMOUD ELFESHAWY			*******************/
/*********		File: CLCD_PRV.h			*******************/
/*********		Version: 1.00				*******************/
/**************************************************************/
/**************************************************************/

#ifndef CLCD_PRV_H_
#define CLCD_PRV_H_

static void voidSendEnablePulse(void);
static void voidSetLCDHalfDataPort(uint8 Copy_u8Nipple);     /*Nipple mean four bit*/


#define EIGHT_BIT_MODE        1u
#define FOUR_BIT_MODE         2u



/* lw sh8al 3la elket*/
#define ENABLED           1u
#define DISABLED          2u


#endif
