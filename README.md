# bare-metal-drivers-for-STM32

The repository following the course "(MCU1) Learn bare metal driver development using Embedded C: Writing drivers for STM32 GPIO,I2C,SPI,USART from scratch" on Udemy to practicing driver development of STM32 Microcontroller.

- Course Main Topics: GPIO, GPIO Interrupt, I2C, SPI, UART and USART driver APIs

- IDE: STM32CubeIDE 1.18.1 

- Microcontroller: STM32 NUCLEO-F767ZI

---
## In Development :
1. STM32f767xx Device Header File
>/stm32f7xx_drivers/drivers/Inc/stm32f767xx.h

2. SPI Driver APIs
>/stm32f7xx_drivers/drivers/Inc/stm32f767xx_spi_driver.h
>/stm32f7xx_drivers/drivers/Src/stm32f767xx_spi_driver.c

3. SPI Exercise
>/stm32f7xx_drivers/Src/006spi_tx_testing.c

4. Communication between STM32 and Arduino using SPI
> The project hasn’t been created yet.

---
## Completed :
1. GPIO Driver APIs
>/stm32f7xx_drivers/drivers/Inc/stm32f767xx_gpio_driver.h
>/stm32f7xx_drivers/drivers/Src/stm32f767xx_gpio_driver.c

2. GPIO Exercise
>/stm32f7xx_drivers/Src/001led_toggled.c
>/stm32f7xx_drivers/Src/002led_button.c
>/stm32f7xx_drivers/Src/005button_interrupt.c

