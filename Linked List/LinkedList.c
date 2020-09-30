#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};
typedef struct Node* node;

// Function to return a node
node create_node(int data)
{
	node new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = data;
	new_node->next = NULL;

	return new_node;
}


// function to insert at the end
node insert_end(node head, node new_node)
{
	if(new_node == NULL)
	{
		printf("New node passed is NULL\n");
		return head;
	}

	// Empty List
	if(head == NULL)
	{
		return new_node;
	}

	// One element
	else if(head->next == NULL)
	{
		head->next = new_node;
		return head;
	}

	//Loop till last element
	else 
	{
		node ptr = head;
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = new_node;
		return head;
	}
}


// function to insert at the front
node insert_front(node head, node new_node)
{
	if(new_node == NULL)
	{
		printf("New node passed is NULL\n");
		return head;
	}

	// Empty List
	if(head == NULL)
	{
		return new_node;
	}

	else
	{
		new_node->next = head;
		return new_node;
	}
}


// Delete from the end
node delete_last(node head)
{
	if(head == NULL)
	{
		printf("List is empty. Nothing to delete.\n");
		return head;
	}

	else if(head->next == NULL)
	{
		free(head);
		return NULL;
	}

	else
	{
		node cur = head;
		node prev = NULL;

		while(cur->next != NULL)
		{
			prev = cur;
			cur = cur->next;
		}


		prev->next = NULL;
		free(cur);
		
		return head;

	}
}


node delete_first(node head)
{
	if(head == NULL)
	{
		printf("List is empty. Nothing to delete.\n");
		return head;
	}

	else
	{
		node ptr = head;
		head = head->next;

		free(ptr);

		return head;
	}
}


void display_list(node head)
{

	if(head == NULL)
	{
		printf("List is empty. Nothing to print.\n");
		return;
	}

	node ptr = head;

	while(ptr != NULL)
	{
		printf("%d-->", ptr->data);
	}

	printf("\n");
}


int search_list(node head, int key)
{
	if(head == NULL)
	{
		printf("List is empty. Nothing to Search.\n");
		return -1;
	}

	else
	{
		node ptr = head;
		int found = 0;
		int index = 0;

		while(ptr != NULL)
		{
			if(ptr->data == key)
			{
				found = 1;
				break;
			}

			else
			{
				ptr = ptr->next;
				index++;
			}
		}

		if(found)
		{
			return index;
		}

		else
		{
			return -1;
		}
	}
}




int main(int argc, char const *argv[])
{

	node head;

	int val;
	int opt;
	node newn;
	do
	{
		printf("0. Exit\n1. Insert Front\n2. Insert End\n3. Delete Last\n4. Delete First\n5. Display List\n6. Search List\n");
		printf("\nEnter the option: ");
		scanf("%d", &opt);
		switch(opt)
		{
			case 0: break;
			case 1: printf("Enter value to insert: ");
			scanf("%d", &val);
			newn = create_node(val);
			insert_front(head, newn); break;

			case 2: printf("Enter value to insert: ");
			scanf("%d", &val);
			newn = create_node(val);
			insert_end(head, newn); break;

			case 3: delete_last(head);break;
			case 4: delete_first(head);break;
			case 5: display_list(head);break;

			case 6: printf("Enter key to search:");
			scanf("%d", &val);
			search_list(head, val); break;

			default: printf("Enter a valid value.\n");

		}
	}while(opt);
	
	return 0;
}