#include <bits/stdc++.h>
using namespace std;

/*
141. Linked List Cycle:
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.


Solution 1: 
Traverse through the linked list and use a map to store each visited node's value as true. If we encounter
that node again and its value is true. Then it's a cycle, return true. If we reach null, end the traversal
and return false.


Time Complexity -> O(n)
Space Complexity -> O(n)

Solution 2:
Using the Floyd's Cycle Detection Algorithm. Use two pointers, one fast and one slow, moving fast twice
as far. If fast reaches null, then stop and return false, else if both fast and slow pointer meet, then
it is a cycle, return true.

Time Complexity -> O(n)
Space Complexity -> O(1)

*/


/* -------- CODE --------*/


// Solution 1 Implementation:
bool hasCycle(ListNode *head) {
    if(head == NULL || head->next == NULL){
        return false;
    }
    
    map<ListNode*, bool> mp;
    
    ListNode* temp = head;
    
        while(temp!=NULL){
        if(mp[temp]==true){
            return true;
        }
        mp[temp] = true;
        temp = temp->next;
        
    }
    
    return false;
}

// Solution 2 Implementation:
bool hasCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;
    
    while(slow!=NULL && fast != NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow==fast){
            return true;
        }
    }
    
    return false;
}