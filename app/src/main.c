#include <stm32f10x.h>
#include <stm32f10x_conf.h>
#include <stm32_configuration.h>

int main()
{
	RCC_Configuration();
	NVIC_Configuration();
	GPIO_Configuration();

	while(1)
	{
		GPIO_SetBits(GPIOC, GPIO_Pin_12);
		GPIO_ResetBits(GPIOC, GPIO_Pin_12);
	}
}


