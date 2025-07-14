#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;   
        ListNode* curr = head;    

        while (curr != NULL) {
            ListNode* front = curr->next; // Save the next node
            curr->next = prev;           // Reverse the current node's pointer
            prev = curr;                 // Move the previous pointer to the current node
            curr = front;                // Move to the next node
        }

        return prev; // Return the new head of the reversed list
    }
};

// Add this to make the file standalone and runnable for testing
int main() {
    Solution solution;

    // Create a sample list: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));

    // Reverse the list
    ListNode* reversed = solution.reverseList(head);

    // Print the reversed list
    ListNode* temp = reversed;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
