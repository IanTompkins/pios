

//list.c
//Worked with Alec

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//with help from Jack
void list_add(struct list_element *list_head, struct list_element *new_data){
	struct list_element * prev = list_head;
	

	if(prev == NULL){
		list_head = new_data;
		return;
	}
	while(prev->next != NULL)
		prev = prev->next;
	new_node->prev = prev;
	prev->next = new_node;
}
//With help from Kaylin
void list_remove(struct list_element * element, int data){
	//whatever the pointer is, remove that element.
	struct list_element * head_pointer = list_head;
	if(list_head == NULL)
		return;
	if(head_pointer->data == data){
		*element = data->next;
		return;
	}
	while(head_pointer->next){
		if(data == head_pointer->data){
			head_pointer->prev->next = head_pointer->next;
			head_pointer = head_pointer->next;
			continue;
		}
		head_pointer = head_pointer->next;
	}

}
