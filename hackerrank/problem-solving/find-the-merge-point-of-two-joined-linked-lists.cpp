#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode
{
public:
    int data;
    SinglyLinkedListNode *next;

    SinglyLinkedListNode(int node_data)
    {
        this->data = node_data;
        this->next = nullptr;
    }
};

class SinglyLinkedList
{
public:
    SinglyLinkedListNode *head;
    SinglyLinkedListNode *tail;

    SinglyLinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insert_node(int node_data)
    {
        SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);

        if (!this->head)
        {
            this->head = node;
        }
        else
        {
            this->tail->next = node;
        }

        this->tail = node;
    }
};

void print_singly_linked_list(SinglyLinkedListNode *node, string sep, ofstream &fout)
{
    while (node)
    {
        fout << node->data;

        node = node->next;

        if (node)
        {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode *node)
{
    while (node)
    {
        SinglyLinkedListNode *temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    SinglyLinkedListNode *cur1 = head1;
    SinglyLinkedListNode *cur2 = head2;
    int count1 = 0;
    int count2 = 0;
    while (cur1 != NULL)
    {
        count1++;
        cur1 = cur1->next;
    }
    while (cur2 != NULL)
    {
        count2++;
        cur2 = cur2->next;
    }
    cur1 = head1;
    cur2 = head2;
    if (count1 > count2)
    {
        while (count1 != count2)
        {
            cur1 = cur1->next;
            count1--;
        }
    }
    if (count2 > count1)
    {
        while (count1 != count2)
        {
            cur2 = cur2->next;
            count2--;
        }
    }
    while (cur1 != NULL && cur2 != NULL)
    {
        if (cur1 == cur2)
        {
            return cur1->data;
        }
        cur2 = cur2->next;
        cur1 = cur1->next;
    }
    return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int tests;
    cin >> tests;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int tests_itr = 0; tests_itr < tests; tests_itr++)
    {
        int index;
        cin >> index;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        SinglyLinkedList *llist1 = new SinglyLinkedList();

        int llist1_count;
        cin >> llist1_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 0; i < llist1_count; i++)
        {
            int llist1_item;
            cin >> llist1_item;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            llist1->insert_node(llist1_item);
        }

        SinglyLinkedList *llist2 = new SinglyLinkedList();

        int llist2_count;
        cin >> llist2_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 0; i < llist2_count; i++)
        {
            int llist2_item;
            cin >> llist2_item;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            llist2->insert_node(llist2_item);
        }

        SinglyLinkedListNode *ptr1 = llist1->head;
        SinglyLinkedListNode *ptr2 = llist2->head;

        for (int i = 0; i < llist1_count; i++)
        {
            if (i < index)
            {
                ptr1 = ptr1->next;
            }
        }

        for (int i = 0; i < llist2_count; i++)
        {
            if (i != llist2_count - 1)
            {
                ptr2 = ptr2->next;
            }
        }

        ptr2->next = ptr1;

        int result = findMergeNode(llist1->head, llist2->head);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
