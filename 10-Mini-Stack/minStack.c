#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *data;
    int *mins;
    int size;
} MinStack;

MinStack *minStackCreate()
{
    MinStack *s = malloc(sizeof(MinStack));
    s->data = NULL;
    s->mins = NULL;
    s->size = 0;
    return s;
}



void minStackPush(MinStack *s, int x)
{
    s->data = realloc(s->data, sizeof(int) * (s->size + 1));
    s->mins = realloc(s->mins, sizeof(int) * (s->size + 1));
    s->data[s->size] = x;
    if(s->size==0 || s->mins[s->size-1] > x){
        s->mins[s->size] = x;
    }
    else{
        s->mins[s->size] = s->mins[s->size-1];
    }
    s->size++;
}

void minStackPop(MinStack *s)
{
    s->size--;
}

int minStackTop(const MinStack *s)
{
    return s->data[s->size - 1];
}

int minStackGetMin(MinStack *s){
    return s->mins[s->size-1];
}


void minStackFree(MinStack *s)
{
    free(s->data);
    free(s->mins);
    free(s);
}
void PrintStack(const MinStack *s)
{
    for (size_t i = 0; i < s->size; i++)
    {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    MinStack *s = minStackCreate();
    // s.size=0;
    minStackPush(s, 10);
    minStackPush(s, 20);
    minStackPush(s, 30);
    PrintStack(s);
    minStackPop(s);
    minStackPush(s, 40);
    PrintStack(s);
    printf("%d\n", minStackGetMin(s));
    minStackFree(s);
    
    return 0;
}
