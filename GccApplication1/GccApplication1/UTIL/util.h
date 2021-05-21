/*
 * util.h
 *
 * Created: 5/16/2021 2:16:42 PM
 *  Author: ASAH2
 */ 


#ifndef UTIL.H_H_
#define UTIL.H_H_


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




#endif /* UTIL.H_H_ */