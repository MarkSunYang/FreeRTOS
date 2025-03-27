#include "list.h"

/*链表根节点初始化*/
void vListInitialise(List_t * const pxList){
	/*将链表索引指针指向最后一个节点*/
	pxList->pxIndex=(ListItem_t *)&(pxList->xListEnd);
	
	/*将链表最后一个节点的辅助排序的值设置为最大，确保该节点是最后节点*/
	pxList->xListEnd.xItemValue=portMAX_DELAY;
	
	/*将链表最后一个节点的pxNext和pxPrevious指针均指向节点自身，表示链表为空*/
	pxList->xListEnd.pxNext=(ListItem_t *)&(pxList->xListEnd);
	pxList->xListEnd.pxPrevious=(ListItem_t *)&(pxList->xListEnd);
	
	/*初始化链表节点计数器的值为0，表示链表为空*/
	pxList->uxNumberOfItems=(UBaseType_t)0U;
}


/*节点初始化*/
void vListInitialiseItem(ListItem_t * const pxItem){
	/*初始化该节点所在的链表为空，表示该节点还没有插入任何链表*/
	pxItem->pvContainer=NULL;
}


/*将节点插入链表尾部*/
void vListInsertEnd(List_t * const pxList,ListItem_t* const pxNewListItem ){
	
	ListItem_t * const pxIndex=pxList->pxIndex;/*pxIndex指向end节点*/
	
	/*1.新节点的下一个节点指向 End*/
	pxNewListItem->pxNext=pxIndex;
	
	/*2.新节点的上一个节点指向原来End节点的上一个节点*/
	pxNewListItem->pxPrevious= pxIndex->pxPrevious;
	
	/*3.end的上一个节点的下一个指向新节点*/
	pxIndex->pxPrevious->pxNext=pxNewListItem;
	
	/*4.End节点上一个指向新插入的节点*/
	pxIndex->pxPrevious=pxNewListItem;
	
	/*记住该节点所在的链表*/
	pxNewListItem->pvContainer=(void*)pxList;
	
	/*链表节点计数器++*/
	(pxList->uxNumberOfItems)++;
	
}


/*将节点按照升序排序插入到列表中*/
void vListInsert(List_t * const pxList, ListItem_t * const pxNewListItem){
	
	ListItem_t *pxIterator;
	const TickType_t xValueOfInsertion=pxNewListItem->xItemValue;
	
	/*寻找要插入的位置*/
	
	
	
	
		/*记住该节点所在的链表*/
	pxNewListItem->pvContainer=(void*)pxList;
	
	/*链表节点计数器++*/
	(pxList->uxNumberOfItems)++;
}

/*删除链表节点*/
void vListDelete(){
	
}

