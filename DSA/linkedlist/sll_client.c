#include<stdio.h>
#include<stdlib.h>
#include "sll_header.h"
#include<assert.h>
void main()
{
    status_t status;
    sll_t* p_list = NULL;
    data_t data;

    p_list = create_list();
    show_list(p_list, "After create list");

    status = insert start(p_list, 10);
    show_list(p_list,"After insert start");
    status = insert end(p_list,20);
    show_list(p_list,"After insert end");
    status = insert start(p_list, 30);
    show_list(p_list,"After insert start");
    status = insert start(p_list, 40);
    show_list(p_list,"After insert start");
    status = insert start(p_list, 50);
    show_list(p_list,"After insert start");
    status = insert start(p_list, 60);
    show_list(p_list,"After insert start");
    status = insert end(p_list,70);
    assert(status == SUCCESS);
    show_list(p_list,"After insert end");

    status = insert_after(p-list,30,-5000);
    show_list(p_list,"Ater insert_after");
    status = insert_before(p_list,70,-9000);
    assert(status == SUCCESS);
    show_list(p_list,"Ater insert_before"); 

    status = get_start(p_list,&data);
    assert(status == SUCCESS);
    printf("Start data = %d\n",data)
    status = get_end(p_list,&data);  
    assert(status == SUCCESS);
    printf("End data = %d\n",data) 
}

