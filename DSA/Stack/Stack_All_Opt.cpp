#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct stack
{
	int size;
	int top;
	int *arr;
};
int isEmpty(struct stack *ptr)
{
	if (ptr->top == -1)
		return 1;
	else
		return 0;
}

int isFull(struct stack *ptr)
{
	if (ptr->top == ptr->size - 1)
		return 1;
	else
		return 0;
}
void push(struct stack *ptr, int val)
{
	if (isFull(ptr))
		printf("STACK_OVERFLOW");
	else
		ptr->top++;
	ptr->arr[ptr->top] = val;
}
void pop(struct stack *ptr)
{
	int val;
	if (isEmpty(ptr))
		printf("!!STACK_UNDERFLOW !!");
	else
	{
		val = ptr->arr[ptr->top];
		ptr->top--;
		printf("%d is Popped from Stack ", val);
	}
}
void peek(struct stack *ptr, int i)
{
	int index = (ptr->top - i + 1);
	if (index < 0)
	{
		printf("\nNot a valid position");
	}
	else
		printf("\nElement %d is %d", i, ptr->arr[index]);
}

void traverse(struct  stack *ptr)
{
	if (isEmpty(ptr))
	{
		printf("The Stack is empty.");
	}
	else
	{
		for (int j = ptr->top; j >= 0; j--)
		{
			printf("Element %d = %d\n", ptr->top - j + 1, ptr->arr[j]);
		}
	}
}
void quite(struct stack *p)
{
	free(p);
	exit(0);
}
int main()
{
	struct stack *s = (struct stack *)malloc(sizeof(struct stack)); // s is a pointer type stack object' whose memory is requested in the heap
	s->size = 5;
	s->top = -1;
	s->arr = (int *)malloc(s->size * sizeof(int)); // arr is an inetger type pointer array

	int x;
	printf(" 1.Push \n 2. Pop \n 3. Peek \n 4. Traverse\n 5. Quite\n #Maximum 5 elements#");

	while (true)
	{
		printf("\nEnter your Choice :");
		scanf("%d", &x);
		switch (x)
		{
		case 1:
			int val;
			printf("\n Enter the value: ");
			scanf("%d", &val);
			push(s, val);
			break;
		case 2:
			pop(s);
			break;
		case 3:
			if (isEmpty(s))
			{
				printf("The stack is empty now.\n");
				break;
			}
			else
			{
				int i;
				printf("\nEnter position to peek:");
				scanf("%d", &i);
				peek(s, i);
				break;
			}
		case 4:
			traverse(s);
			break;
		case 5:
			quite(s);
			break;
		default:
			printf("\n Invalid input");
			break;
		}
	}
	return 0;
}
