#include <bits/stdc++.h >

using namespace std;

struct Node
{
    int data;
    Node *next;
};

class CreateLinkList
{
public:
    void traverse(Node *head)
    {
        Node *p = head;
        while (p != NULL)
        {
            cout << p->data << " -> ";
            p = p->next;
        }
    }
    // Add the starting node
    Node *insertAtBeg(Node *head, int val)
    {
        Node *tmp;
        tmp = (Node *)malloc(sizeof(Node));
        // Return the original head if memory allocation fails.
        if (!tmp)
        {
            printf("Memory allocation error\n");
            return head;
        }
        tmp->data = val;
        tmp->next = head;
        head = tmp;
        return head;
    }
    // Add node at the end / tail
    Node *insertAtEnd(Node *head, int val)
    {
        Node *ptr;
        Node *tmp;
        tmp = (Node *)malloc(sizeof(Node));
        // Return the original head if memory allocation fails.
        if (!tmp)
        {
            printf("Memory allocation error\n");
            return head;
        }
        tmp->data = val;
        ptr = head;
        while (ptr->next != NULL) // till the second last node
            ptr = ptr->next;

        ptr->next = tmp;
        tmp->next = NULL;
        return head;
    }

    // main function to create list
    Node *createList(Node *head)
    {
        int n, val;
        cout << "Enter No of nodes: ";
        cin >> n;

        head = NULL;
        cout << "Enter the data-1: ";
        cin >> val;
        head = insertAtBeg(head, val);

        for (int i = 2; i <= n; i++)
        {
            cout << "Enter the data-" << i << ": ";
            cin >> val;
            head = insertAtEnd(head, val);
        }
        return head;
    }

    // Insert at a index
    struct Node *insertAtIndex(struct Node *head, int data)
    {
        struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = data;
        struct Node *p = head;
        int index;
        cout << "\nEnter insertion index:";
        cin >> index;
        int i = 0;
        while (i != index - 1)
        {
            p = p->next;
            i++;
        }

        ptr->next = p->next;
        p->next = ptr;
        return head;
    }
};
