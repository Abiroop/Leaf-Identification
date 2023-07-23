#ifndef INC_ADDRESS_H_
#define INC_ADDRESS_H_

#define aGPIOA 0x48000000UL
#define MODER_off 0x00UL
#define MODER_RESET OxA8000000UL
#define ANALOG_EN_4 0x00000300UL
#define GPIO_PUPDR_off 0x0C
#define GPIO_PUPDR_None 0xFFFFFCFF

#define DAC1my 0x40007400UL
#define DAC_CR_off 0x00UL
#define DAC_CR_RESET 0x00000000UL
#define DAC_ch1_EN 0x00000001UL
#define DAC_SR_off 0x34UL
#define DAC_DHR12R1 0x08UL
#define DAC_BOFF1_DISABLE 0xFFFDUL
#define DAC_MAMP1 0x0F00UL

#define RCCmy 0x40021000
#define RCC_APB1ENR_off 0x1C
#define RCC_EN_APB1 0x20000000
#define RCC_AHBENR_off 0x14
#define RCC_EN_AHB 0x00020000

#endif /* INC_ADDRESS_H_ */
