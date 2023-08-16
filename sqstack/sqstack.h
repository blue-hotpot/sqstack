typedef int data_t;
#define N 2
typedef struct sqstack
{
    data_t data[N];
    int top;
}sqstack;

sqstack *sqstack_creat();
int stack_clear(sqstack *l);
int stack_push(sqstack *l,data_t value);
data_t stack_pop(sqstack *l);
int stack_empty(sqstack *l);
int stack_full(sqstack *l);
int stack_free(sqstack *l);
int stack_show(sqstack *l);