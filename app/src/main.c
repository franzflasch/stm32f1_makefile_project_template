#include <stm32f10x.h>
#include <stm32f10x_conf.h>
#include <stm32_configuration.h>

void Delay(__IO uint32_t nCount)
{
  for(; nCount != 0; nCount--);
}

int main()
{
	RCC_Configuration();
	NVIC_Configuration();
	GPIO_Configuration();

	while(1)
	{
		GPIO_SetBits(GPIOC, GPIO_Pin_8);
		Delay(10000);
		GPIO_ResetBits(GPIOC, GPIO_Pin_8);
		Delay(10000);
	}
}


