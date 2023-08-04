#include<stdio.h>
#include<stdlib.h>
#include"sqstack.h"
int main(int argc, char const *argv[])
{
    sqstack *l;
    data_t value;
    l=sqstack_creat(5);
    stack_push(l,1);
    stack_push(l,2);
    stack_push(l,3);
    stack_push(l,4);
    while(l->top!=-1)
    {
        printf("pop:%d ",stack_pop(l));
    }
    printf("\n");
    stack_free(l);
    return 0;
    

}
