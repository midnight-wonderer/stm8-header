#ifndef __STM8S_TIMER_H  // include guard
#define __STM8S_TIMER_H

#define TIM4_BASE 0x5340

#define TIM4_CR1_OFFSET 0x0
#define TIM4_IER_OFFSET 0x3
#define TIM4_SR_OFFSET 0x4
#define TIM4_EGR_OFFSET 0x5
#define TIM4_CNTR_OFFSET 0x6
#define TIM4_PSCR_OFFSET 0x7
#define TIM4_ARR_OFFSET 0x8

#define TIM4_CR1 *(unsigned char*)(TIM4_BASE + TIM4_CR1_OFFSET)
#define TIM4_IER *(unsigned char*)(TIM4_BASE + TIM4_IER_OFFSET)
#define TIM4_SR *(unsigned char*)(TIM4_BASE + TIM4_SR_OFFSET)
#define TIM4_EGR *(unsigned char*)(TIM4_BASE + TIM4_EGR_OFFSET)
#define TIM4_CNTR *(unsigned char*)(TIM4_BASE + TIM4_CNTR_OFFSET)
#define TIM4_PSCR *(unsigned char*)(TIM4_BASE + TIM4_PSCR_OFFSET)
#define TIM4_ARR *(unsigned char*)(TIM4_BASE + TIM4_ARR_OFFSET)

#endif  // include guard
