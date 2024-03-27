//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        if (head==NULL) return head;
        if (head->next == NULL){
            if (head->data == 9){
                head->data = 0;
                Node* nn = new Node(1);
                nn->next = head;
                return nn;
            }
            else{
                head->data++;
                return head;
            }
        }
        Node* cur = head;
        Node* prev = NULL;
        Node* next = NULL;
        while (cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        cur = prev;
        int carry = (cur->data+1)/10;
        cur->data = (cur->data+1)%10;
        cur = cur->next;
        while (carry and cur->next){
            cur->data = cur->data+1;
            carry = cur->data/10;
            cur = cur->next;
        }
        if (carry and cur){
            cur->data = cur->data+1;
            carry = cur->data/10;
        }
        if (carry){
            Node* nn = new Node(carry);
            cur->next = nn;
        }
        cur = head;
        prev = NULL;
        next = NULL;
        while (cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends