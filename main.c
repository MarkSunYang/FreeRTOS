#include "list.h"

uint32_t flag1;
uint32_t flag2;

void Task1_Entry(void *p_arg);
void Task2_Entry(void *p_arg);

#define TASK1_STACK_SIZE 20
StackType_t Task1Satck[TASK1_STACK_SIZE];

#define TASK2_STACK_SIZE 20
StackType_t Task2Satck[TASK2_STACK_SIZE];

TCB_t task1TCB;

int main(void)
{
	for(;;){
		
	}
}


/*定义一个任务*/
void Task1_Entry(void *p_arg){
	for(;;){
		
		
	}
}

void Task2_Entry(void *p_arg){
	for(;;){
	}
}


void delay(uint32_t count){
	for(;count!=0;count--);
}
