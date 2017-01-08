#ifndef __STM8S_UART_H  // include guard
#define __STM8S_UART_H

#define UART1_BASE 0x5230

#define UARTx_SR_OFFSET 0x0
#define UARTx_DR_OFFSET 0x1
#define UARTx_BRR1_OFFSET 0x2
#define UARTx_BRR2_OFFSET 0x3
#define UARTx_CR1_OFFSET 0x4
#define UARTx_CR2_OFFSET 0x5
#define UARTx_CR3_OFFSET 0x6
#define UARTx_CR4_OFFSET 0x7
#define UARTx_CR5_OFFSET 0x8
#define UARTx_GTR_OFFSET 0x9
#define UARTx_PSCR_OFFSET 0xa

#define UART1_SR *(unsigned char*)(UART1_BASE + UARTx_SR_OFFSET)
#define UART1_DR *(unsigned char*)(UART1_BASE + UARTx_DR_OFFSET)
#define UART1_BRR1 *(unsigned char*)(UART1_BASE + UARTx_BRR1_OFFSET)
#define UART1_BRR2 *(unsigned char*)(UART1_BASE + UARTx_BRR2_OFFSET)
#define UART1_CR1 *(unsigned char*)(UART1_BASE + UARTx_CR1_OFFSET)
#define UART1_CR2 *(unsigned char*)(UART1_BASE + UARTx_CR2_OFFSET)
#define UART1_CR3 *(unsigned char*)(UART1_BASE + UARTx_CR3_OFFSET)
#define UART1_CR4 *(unsigned char*)(UART1_BASE + UARTx_CR4_OFFSET)
#define UART1_CR5 *(unsigned char*)(UART1_BASE + UARTx_CR5_OFFSET)
#define UART1_GTR *(unsigned char*)(UART1_BASE + UARTx_GTR_OFFSET)
#define UART1_PSCR *(unsigned char*)(UART1_BASE + UARTx_PSCR_OFFSET)

#endif  // include guard
