#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
 
 //����3
/************************************************
 ALIENTEKս��STM32������ʵ��1
 �����ʵ�� 
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/


 int main(void)
 {	
	delay_init();	    //��ʱ������ʼ��	 
	SystemInit(); 
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	
	while(1)
	{
		LED0=0;
		LED1=0 ;
	//���ٲ���
		delay_ms(300);	//��ʱ300ms
	}
 }




