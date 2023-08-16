#include<stdio.h>
#include<stdlib.h>
#include"sqstack.h"
int main()
{
    sqstack *l;
    int value=0;
    l=sqstack_creat(2);
    printf("empty? y1 n0 :%d\n",stack_empty(l));
    stack_push(l,1);
    stack_push(l,2);
    while(l->top!=-1)
    {
        value=stack_pop(l);
        printf("pop:%d\n",value);
    }
    stack_free(l);
    return 0;
    

}
