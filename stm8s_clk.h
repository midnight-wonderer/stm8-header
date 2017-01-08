#ifndef __STM8S_CLK_H  // include guard
#define __STM8S_CLK_H

#define CLK_BASE 0x50C0

#define CLK_ICKR_OFFSET 0x0
#define CLK_ECKR_OFFSET 0x1
#define CLK_CMSR_OFFSET 0x3
#define CLK_SWR_OFFSET 0x4
#define CLK_SWCR_OFFSET 0x5
#define CLK_CKDIVR_OFFSET 0x6
#define CLK_PCKENR1_OFFSET 0x7
#define CLK_CSSR_OFFSET 0x8
#define CLK_CCOR_OFFSET 0x9
#define CLK_PCKENR2_OFFSET 0xB
#define CLK_HSITRIMR_OFFSET 0xC
#define CLK_SWIMCCR_OFFSET 0xD

#define CLK_ICKR *(unsigned char*)(CLK_BASE + CLK_ICKR_OFFSET)
#define CLK_ECKR *(unsigned char*)(CLK_BASE + CLK_ECKR_OFFSET)
#define CLK_CMSR *(unsigned char*)(CLK_BASE + CLK_CMSR_OFFSET)
#define CLK_SWR *(unsigned char*)(CLK_BASE + CLK_SWR_OFFSET)
#define CLK_SWCR *(unsigned char*)(CLK_BASE + CLK_SWCR_OFFSET)
#define CLK_CKDIVR *(unsigned char*)(CLK_BASE + CLK_CKDIVR_OFFSET)
#define CLK_PCKENR1 *(unsigned char*)(CLK_BASE + CLK_PCKENR1_OFFSET)
#define CLK_CSSR *(unsigned char*)(CLK_BASE + CLK_CSSR_OFFSET)
#define CLK_CCOR *(unsigned char*)(CLK_BASE + CLK_CCOR_OFFSET)
#define CLK_PCKENR2 *(unsigned char*)(CLK_BASE + CLK_PCKENR2_OFFSET)
#define CLK_HSITRIMR *(unsigned char*)(CLK_BASE + CLK_HSITRIMR_OFFSET)
#define CLK_SWIMCCR *(unsigned char*)(CLK_BASE + CLK_SWIMCCR_OFFSET)

#endif  // include guard
