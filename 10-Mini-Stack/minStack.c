#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *data;
    int size;
} Stack;

Stack *CreateStack()
{
    Stack *s = malloc(sizeof(Stack));
    s->data = NULL;
    s->size = 0;
    return s;
}

void DestoryStack(Stack *s)
{
    free(s->data);
    free(s);
}

void PushStack(Stack *s, int x)
{
    s->data = realloc(s->data, sizeof(int) * (s->size + 1));
    s->data[s->size] = x;
    s->size++;
}

void PopStack(Stack *s)
{
    s->size--;
}

int TopStack(const Stack *s)
{
    return s->data[s->size - 1];
}

void PrintStack(const Stack *s)
{
    for (size_t i = 0; i < s->size; i++)
    {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    Stack *s = CreateStack();
    // s.size=0;
    PushStack(s, 10);
    PushStack(s, 20);
    PushStack(s, 30);
    PrintStack(s);
    PopStack(s);
    PushStack(s, 40);
    PrintStack(s);

    DestoryStack(s);
    return 0;
}
