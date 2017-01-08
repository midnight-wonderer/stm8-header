#ifndef __STM8S_GPIO_H  // include guard
#define __STM8S_GPIO_H

#define PA_BASE 0x5000
#define PB_BASE 0x5005
#define PC_BASE 0x500A
#define PD_BASE 0x500F
#define PE_BASE 0x5014
#define PF_BASE 0x5019
#define PG_BASE 0x501E
#define PH_BASE 0x5023
#define PI_BASE 0x5028

#define Px_ODR_OFFSET 0x0
#define Px_IDR_OFFSET 0x1
#define Px_DDR_OFFSET 0x2
#define Px_CR1_OFFSET 0x3
#define Px_CR2_OFFSET 0x4

#define PA_ODR *(unsigned char*)(PA_BASE + Px_ODR_OFFSET)
#define PA_IDR *(unsigned char*)(PA_BASE + Px_IDR_OFFSET)
#define PA_DDR *(unsigned char*)(PA_BASE + Px_DDR_OFFSET)
#define PA_CR1 *(unsigned char*)(PA_BASE + Px_CR1_OFFSET)
#define PA_CR2 *(unsigned char*)(PA_BASE + Px_CR2_OFFSET)

#define PB_ODR *(unsigned char*)(PB_BASE + Px_ODR_OFFSET)
#define PB_IDR *(unsigned char*)(PB_BASE + Px_IDR_OFFSET)
#define PB_DDR *(unsigned char*)(PB_BASE + Px_DDR_OFFSET)
#define PB_CR1 *(unsigned char*)(PB_BASE + Px_CR1_OFFSET)
#define PB_CR2 *(unsigned char*)(PB_BASE + Px_CR2_OFFSET)

#define PC_ODR *(unsigned char*)(PC_BASE + Px_ODR_OFFSET)
#define PC_IDR *(unsigned char*)(PC_BASE + Px_IDR_OFFSET)
#define PC_DDR *(unsigned char*)(PC_BASE + Px_DDR_OFFSET)
#define PC_CR1 *(unsigned char*)(PC_BASE + Px_CR1_OFFSET)
#define PC_CR2 *(unsigned char*)(PC_BASE + Px_CR2_OFFSET)

#define PD_ODR *(unsigned char*)(PD_BASE + Px_ODR_OFFSET)
#define PD_IDR *(unsigned char*)(PD_BASE + Px_IDR_OFFSET)
#define PD_DDR *(unsigned char*)(PD_BASE + Px_DDR_OFFSET)
#define PD_CR1 *(unsigned char*)(PD_BASE + Px_CR1_OFFSET)
#define PD_CR2 *(unsigned char*)(PD_BASE + Px_CR2_OFFSET)

#define PE_ODR *(unsigned char*)(PE_BASE + Px_ODR_OFFSET)
#define PE_IDR *(unsigned char*)(PE_BASE + Px_IDR_OFFSET)
#define PE_DDR *(unsigned char*)(PE_BASE + Px_DDR_OFFSET)
#define PE_CR1 *(unsigned char*)(PE_BASE + Px_CR1_OFFSET)
#define PE_CR2 *(unsigned char*)(PE_BASE + Px_CR2_OFFSET)

#define PF_ODR *(unsigned char*)(PF_BASE + Px_ODR_OFFSET)
#define PF_IDR *(unsigned char*)(PF_BASE + Px_IDR_OFFSET)
#define PF_DDR *(unsigned char*)(PF_BASE + Px_DDR_OFFSET)
#define PF_CR1 *(unsigned char*)(PF_BASE + Px_CR1_OFFSET)
#define PF_CR2 *(unsigned char*)(PF_BASE + Px_CR2_OFFSET)

#endif  // include guard
