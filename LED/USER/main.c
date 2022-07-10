#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
 
 //测试3
/************************************************
就离谱
************************************************/


 int main(void)
 {	
	delay_init();	    //延时函数初始化	 
	SystemInit(); 
	LED_Init();		  	//初始化与LED连接的硬件接口
	
	while(1)
	{
		LED0=0;
		LED1=0 ;
	//网速测试
		delay_ms(300);	//延时300ms
	}
 }




