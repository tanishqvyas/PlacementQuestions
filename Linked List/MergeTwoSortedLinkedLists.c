#include <stdlib.h>
#include <stdio.h>

struct ListNode {
      int val;
      struct ListNode *next;
};
 


struct ListNode* create_node(int val)
{
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    
    return node;
}


struct ListNode* add_to_list(struct ListNode* head, struct ListNode* node)
{
    if(head == NULL)
    {
        return node;
    }

    struct ListNode* ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    
    ptr->next = node;
    
    
    return head;
}


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

    struct ListNode* ptr1 = l1;
    struct ListNode* ptr2 = l2;
    struct ListNode* hold = NULL;
    struct ListNode* head = NULL;
    
    
    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1->val <= ptr2->val)
        {
            struct ListNode* new_node = create_node(ptr1->val);
            head = add_to_list(head, new_node);
            hold = ptr1;
            ptr1 = ptr1->next;
            free(hold);
            hold = NULL;
        }
        
        else{
            struct ListNode* new_node = create_node(ptr2->val);
            head = add_to_list(head, new_node);
            hold = ptr2;
            ptr2 = ptr2->next;
            free(hold);
            hold = NULL;   
        }
    }
    
    if(ptr1 != NULL)
    {
        while(ptr1 != NULL)
        {
            struct ListNode* new_node = create_node(ptr1->val);
            head = add_to_list(head, new_node);
            hold = ptr1;
            ptr1 = ptr1->next;
            free(hold);
            hold = NULL;
        }
    }
    
    else
    {
        while (ptr2 != NULL)
        {
            struct ListNode* new_node = create_node(ptr2->val);
            head = add_to_list(head, new_node);
            hold = ptr2;
            ptr2 = ptr2->next;
            free(hold);
            hold = NULL;  
        }
    }
    
    return head;
}


void display(struct ListNode* head)
{
    struct ListNode* ptr = head;

    while(ptr != NULL)
    {
        printf("%d-->", ptr->val);
        ptr = ptr->next;
    }

    return;
}



int main(int argc, char const *argv[])
{
    struct ListNode* l1 = NULL;
    struct ListNode* l2 = NULL;

    // l1 = create_node(1);
    // l1->next = create_node(2);
    // l1->next->next = create_node(3);

    l2 = create_node(1);
    // l2->next = create_node(5);
    // l2->next->next = create_node(6);

    struct ListNode* n_list = mergeTwoLists(l1, l2);

    display(n_list);



    return 0;
}
