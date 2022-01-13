class Solution
{
public
    ListNode deleteNodes(ListNode head, int m, int n)
    {
        ListNode dummyHead = new ListNode(0);
        dummyHead.next = head;
        ListNode temp = dummyHead;
        while (temp != null && temp.next != null)
        {
            for (int i = 1; i <= m && temp != null && temp.next != null; i++)
                temp = temp.next;
            for (int i = 1; i <= n && temp != null && temp.next != null; i++)
                temp.next = temp.next.next;
        }
        return dummyHead.next;
    }
}

// void linkdelete(struct Node *head, int M, int N)
// {
//     if (head == NULL)
//         return;

//     Node *curr = head;
//     int m = M - 1;

//     while (curr != NULL and m--)
//     {
//         curr = curr->next;
//     }

//     if (curr == NULL)
//         return;

//     Node *temp = curr;

//     while (N-- and curr != NULL)
//     {
//         curr = curr->next;
//     }

//     if (curr == NULL)
//     {
//         temp->next = NULL;
//         return;
//     }

//     temp->next = curr->next;
// }