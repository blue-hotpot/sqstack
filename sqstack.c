#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"sqstack.h"

sqstack *sqstack_creat(int lenth)
{
    sqstack *l;
    l=(sqstack*)malloc(sizeof(sqstack));
    l->data=(data_t *)malloc(lenth*sizeof(data_t));
    if(l==NULL||l->data==NULL)
    {
        printf("creating is fail\n");
        return NULL;
    }
    memset(l->data,0,lenth*sizeof(sqstack));
    l->maxlenth=lenth;
    l->top=-1;
    return l;
}
int stack_clear(sqstack *l)
{
    if(l==NULL||l->data==NULL)
    {
        printf("creating is fail\n");
        return -1;
    }
    for(int i=0;i<=l->top;i++)
    {
        l->data[i]=0;
    }
    l->top=-1;
    return 1;
}
int stack_push(sqstack *l,data_t value)
{
    if(l==NULL||l->data==NULL)
    {
        printf("creating is fail\n");
        return -1;
    }
    if(l->top==l->maxlenth-1)
    {
        printf("the stack is full\n");
        return -1;
    }
    l->top++;
    (l->data[l->top])=value;
    return 1;
}

data_t stack_pop(sqstack *l)
{
    if(l==NULL||l->data==NULL)
    {
        printf("creating is fail\n");
        return -1;
    }
    if(l->top==-1)
    {
        printf("the stack is empty\n");
    }
    l->top--;
    return (l->data[l->top+1]);
}
/*
若为空则输出1
*/
int stack_empty(sqstack *l)
{
    if(l==NULL||l->data==NULL)
    {
        printf("creating is fail\n");
        return -1;
    }
    return (l->top==-1? 1:0);//top为-1 输出1 否则输出0
}

int stack_full(sqstack *l)
{
    if(l==NULL||l->data==NULL)
    {
        printf("creating is fail\n");
        return -1;
    }
    return (l->top==l->maxlenth-1? 1:0);
}


int stack_free(sqstack *l)
{
    if(l==NULL||l->data==NULL)
    {
        printf("creating is fail\n");
        return -1;
    }
    free(l->data);
    free(l);
}



int stack_show(sqstack *l)
{
    if(l==NULL||l->data==NULL)
    {
        printf("creating is fail\n");
        return -1;
    }
    for(int i=0;i<=l->top;i++)
    {
        printf("%d ",(l->data[i]));
    }
}
