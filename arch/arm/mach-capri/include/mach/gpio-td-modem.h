#ifndef __MACH_GPIO_TD_MODEM_H
#define __MACH_GPIO_TD_MODEM_H __FILE__

#define GPIO_TD_PDA_ACTIVE	 8
#define GPIO_TD_PHONE_ON	160
#define GPIO_TD_PHONE_ON2	155
#define GPIO_TD_PHONE_ACTIVE	166
#define GPIO_AP_TD_INT1	164
#define GPIO_AP_TD_INT2	167
#define GPIO_TD_DUMP_INT	169
#define GPIO_IPC_MRDY	168
#define GPIO_IPC_SRDY	60
#define GPIO_IPC_SUB_MRDY	165
#define GPIO_IPC_SUB_SRDY	101
#define GPIO_UART_SEL 	159
#define GPIO_TD_PHONE_EXTRTN 	138
#define GPIO_TD_PHONE_PWRCHK 	163
#define GPIO_SIM_SEL 	158
#define GPIO_CP_CTRL1	149

#define IRQ_PHONE_ACTIVE	gpio_to_irq(GPIO_TD_PHONE_ACTIVE)
#define IRQ_IPC_SRDY		gpio_to_irq(GPIO_IPC_SRDY)
#define IRQ_IPC_SUB_SRDY	gpio_to_irq(GPIO_IPC_SUB_SRDY)
#define IRQ_TD_DUMP_INT		gpio_to_irq(GPIO_TD_DUMP_INT)


#endif /* __MACH_GPIO_TD_MODEM_H */
