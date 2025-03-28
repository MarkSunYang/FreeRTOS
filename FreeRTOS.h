#ifndef INC_FREERTOS_H
#define INC_FREERTOS_H

#include "FreeRTOSConfig.h"
#include "list.h"


typedef struct tskTaskControlBlock{
	volatile StackType_t *pxTopOfStack; /*栈顶指针*/
	
	ListItem_t xStateListItem;/*任务节点*/
	
	StackType_t *pxStack;
	char pcTaskName[configMAX_TASK_NAME_LEN];
	
} tskTCB ;

typedef tskTCB TCB_t;
#endif