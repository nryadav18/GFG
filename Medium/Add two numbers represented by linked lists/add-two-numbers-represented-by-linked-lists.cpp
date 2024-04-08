//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove heading zeros
    struct Node* removeZeros(struct Node* num){
        while (num != 0 and num->data == 0){
            num = num->next;
        }
        return num;
    }
    //Function to add two numbers sent as parameters
    struct Node* add(struct Node* num1,struct Node* num2){
        struct Node* head = NULL;
        struct Node* tail = NULL;
        int carry = 0;
        while (num1 != NULL and num2 != NULL){
            int val = num1->data + num2->data + carry;
            carry = val/10;
            val = val%10;
            struct Node* newNode = new Node(val);
            if (head == NULL){
                head = tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
            num1 = num1->next;
            num2 = num2->next;
        }
        while (num1 != NULL){
            int val = num1->data + carry;
            carry = val/10;
            val = val%10;
            struct Node* newNode = new Node(val);
            if (head == NULL){
                head = tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
            num1 = num1->next;
        }
        while (num2 != NULL){
            int val = num2->data + carry;
            carry = val/10;
            val = val%10;
            struct Node* newNode = new Node(val);
            if (head == NULL){
                head = tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
            num2 = num2->next;
        }
        if (carry){
            struct Node* newNode = new Node(carry);
            if (head == NULL){
                head = tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head;
    }
    //Function to reverse a Linked List
    struct Node* rev(struct Node* num){
        Node* prv = NULL;
        Node* cur = num;
        while (cur != NULL){
            Node* nxt = cur->next;
            cur->next = prv;
            prv = cur;
            cur = nxt;
        }
        return prv;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        if (num1 == NULL) return num2;
        if (num2 == NULL) return num1;
        num1 = removeZeros(num1);
        num2 = removeZeros(num2);
        num1 = rev(num1);
        num2 = rev(num2);
        struct Node* num3 = add(num1,num2);
        num3 = rev(num3);
        num3 = removeZeros(num3);
        if (num3 == NULL) num3 = new Node(0);
        return num3;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends