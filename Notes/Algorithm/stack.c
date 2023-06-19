#include <stdio.h>

// LIFO(Last In First Out)
typedef struct Stack
{
    int top;
    int max_size;
    int *data;
} Stack;

void push(Stack s, int val)
{
    if (s->top < s->max_size)
        s->data[s->top++] = val;
}

int pop(Stack s)
{
    if (s->top > 0)
        return s->data[--s->top];
}

int main(void)
{
    Stack stack;
    push(stack, 50);
    // printf("%d", stack.data);
    return 0;
}