/**
 * @brief Main header file
*/

#ifndef MAIN_H
#define MAIN_H

//definitions ADC
#define ADC_PIN 26

// definiciones PWM
#define PWM_PIN 14
#define PWM_PIN1 15
#define PWM_CH 5

#define LED_PIN2 19
#define LED_PIN 18
#define FUNCSEL_SIO 5
#define FUNCSEL_PWM 4
#define TIME_DELAY 0x123A96
#define PWM_STATUS  12

// Funciones para el control de los gpio
void delay_asm(uint32_t);
void gpio_init_asm(uint32_t); 
void release_reset_IO_bank(uint32_t);
void gpio_set_dir_asm(uint32_t, bool);
void gpio_put_asm(uint32_t, bool);

// Funciones para el control del PWM
void pwm_config_asm();
void Set_cycle_A_asm(uint32_t);
void pwm_init_asm(uint32_t);
void Set_cycle_B_asm(uint32_t);

// Funciones para el control del ADC
void adc_init_asm(uint32_t);
uint32_t adc_read_asm(uint32_t);

// Funciones para el uso de UART
void uart_printMsg_asm(uint32_t, uint32_t);



#endif
