#include <stdio.h>
#include <stdlib.h>

#define MAX 10
typedef struct {
    int items[MAX];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, int item) {
    if (isFull(s)) {
        printf("Full Stack\n");
        return;
    }
    s->items[++(s->top)] = item;
}

int pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
    }
    int value = s->items[s->top];
    s->top--;
    return value;
}

int peek(Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return -1; 
    }
    return s->items[s->top];
}

int main() {
    Stack s;
    initialize(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);

    int valueRemoved = pop(&s);

    printf("Value removed from stack: %d\n", valueRemoved);

    printf("Top element from stack: %d\n", peek(&s));

    return 0;
}