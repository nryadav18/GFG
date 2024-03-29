//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        // 1 2 3 4 5 6 7
        // 0 1 2 3 4 5 6
        
        if (head->next == NULL) return true;
        Node* pre = NULL;
        Node* slow = head;
        Node* fast = head;
        while (fast != NULL and fast->next != NULL){
            pre = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (fast){
            pre = slow;
            slow = slow->next;
        }
        Node* prev = NULL;
        Node* cur = slow;
        while (cur){
            Node* nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        pre->next = prev;
        Node* check1 = head;
        Node* check2 = prev;
        while (check2){
            if (check1->data != check2->data){
                return false;
            }
            check1 = check1->next;
            check2 = check2->next;
        }
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends