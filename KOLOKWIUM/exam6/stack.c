#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack *create_stack()
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    if (stack)
    {
        stack->top = NULL;
    }
    return stack;
}

void push(struct Stack *stack, struct MY_STUDENT data)
{
    struct StackNode *new_node = (struct StackNode *)malloc(sizeof(struct StackNode));
    if (new_node)
    {
        new_node->data = data;
        new_node->next = stack->top;
        stack->top = new_node;
    }
}

struct MY_STUDENT pop(struct Stack *stack)
{
    struct MY_STUDENT data = {0}; // Initialize to zero in case the stack is empty

    if (stack->top)
    {
        struct StackNode *temp = stack->top;
        data = temp->data;
        stack->top = stack->top->next;
        free(temp->data.name);
        free(temp);
    }

    return data;
}

struct MY_STUDENT peek(struct Stack *stack)
{
    struct MY_STUDENT data = {0}; // Initialize to zero in case the stack is empty

    if (stack->top)
    {
        data = stack->top->data;
    }

    return data;
}

bool is_empty(struct Stack *stack)
{
    return stack->top == NULL;
}

void clear_stack(struct Stack *stack)
{
    while (!is_empty(stack))
    {
        pop(stack);
    }
}

void print_stack(struct Stack *stack)
{
    struct StackNode *current = stack->top;

    while (current)
    {
        printf("Name: %s, Birth Year: %d, Study Program: %d\n",
               current->data.name,
               current->data.birth_year,
               current->data.study_program);
        current = current->next;
    }
}

void save_stack_to_file(const char *filename, struct Stack *stack)
{
    FILE *file = fopen(filename, "wb");
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return;
    }

    struct StackNode *current = stack->top;

    while (current)
    {
        // Write student data to the file
        fwrite(&(current->data), sizeof(struct MY_STUDENT), 1, file);

        // Write the length of the name string
        size_t name_len = strlen(current->data.name);
        fwrite(&name_len, sizeof(size_t), 1, file);

        // Write the name string
        fwrite(current->data.name, sizeof(char), name_len, file);

        current = current->next;
    }

    fclose(file);
}

struct Stack *load_stack_from_file(const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        return NULL;
    }

    struct Stack *stack = create_stack();

    struct MY_STUDENT student;
    size_t name_len;
    char *name;

    while (fread(&student, sizeof(struct MY_STUDENT), 1, file))
    {
        fread(&name_len, sizeof(size_t), 1, file);
        name = (char *)malloc((name_len + 1) * sizeof(char));
        fread(name, sizeof(char), name_len, file);
        name[name_len] = '\0';

        student.name = name;
        push(stack, student);
    }

    fclose(file);
    return stack;
}
