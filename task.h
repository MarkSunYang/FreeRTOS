#ifndef INC_TASK_H
#define INC_TASK_H

#include "list.h"
#include "projdefs.h"

#define taskYIELD() portYIELD()

typedef void *  TaskHandle_t;


TaskHandle_t vCreateStaticTask(TaskFunction_t pxTaskCode, /*任务指针*/			
																const char * const pcName, /*任务名称，单位为字*/
																const uint32_t ulStackDepth,/*任务*/
																void * const pvParameters,/*任务*/
																StackType_t * const puxStackBuffer,/*任务*/
																TCB_t * const pxStackBuffer/*任务*/
								){

								TCB_t *pxNewTCB;
					
}
															

#endif /*INC_TASK_H*/