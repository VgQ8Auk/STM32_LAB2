/*
 * software_timer.h
 *
 *  Created on: Oct 1, 2023
 *      Author: quoca
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void timerRun1();

void setTimer2(int duration);
void timerRun2();
#endif /* INC_SOFTWARE_TIMER_H_ */
