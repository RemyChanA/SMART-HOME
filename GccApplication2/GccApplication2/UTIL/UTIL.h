/*
 * UTIL.h
 *
 * Created: 5/16/2021 4:09:11 PM
 *  Author: ASAH2
 */ 


#ifndef UTIL_H_
#define UTIL_H_

/*******HELPING MACROS:
******/

/*******SIT THE BIT
***********/
#define SET_BIT(BUF , NUM)  ((BUF) |= (1<<(NUM)))
/*******CLEAR IT
*********/
#define CLEAR_BIT(BUF , NUM) ((BUF) &=~ (1<<(NUM)))
/*********TOGGLE IT
********/
#define TOGG_BIT(BUF , NUM)  ((BUF) ^= (1<<(NUM)))





#endif /* UTIL_H_ */