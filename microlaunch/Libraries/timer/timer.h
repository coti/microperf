/*============================================================================
   PROJECT : Kernel_Mem_Benchmark (kerbe)
   SOURCE  : timer.h
   MODULE  : Performance Counters
   AUTHOR  : Christophe Lemuet
   UPDATED : 09/09/2003 (DD/MM/YYYY)
============================================================================*/

#ifndef H_TIMER
#define H_TIMER

void *timer_init (void);
int timer_close (void *data);
double timer_start (void *data);
double timer_stop (void *data);
 
#define TIMER_START timer_start();
#define TIMER_STOP  timer_stop();

#endif
