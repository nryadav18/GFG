//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node
{
	Node* next;
	int data;
};

// Utility function to insert a node at the
// beginning
void push(Node** head, int data)
{
	Node* newNode = new Node;
	newNode->next = (*head);
	newNode->data = data;
	(*head) = newNode;
}

// Utility function to print a linked list
void printList(Node* head)
{
	while (head != NULL)
	{
		cout << head->data;
		if (head->next != NULL)
			cout << " ";
		head = head->next;
	}
	cout << endl;
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution{
    
public:
    Node* sortList(Node* head)
    {
        // Your Code Here
        vector<int>pos(1e5+1,0),neg(1e5+1,0);
        Node* temp = head;
        int mini = 1;
        int maxi = -1;
        while (temp != NULL){
            if (temp->data < 0){
                neg[0-temp->data]++;
                if (temp->data < mini){
                    mini = temp->data;
                }
            }
            else{
                pos[temp->data]++;
                if (temp->data > maxi){
                    maxi = temp->data;
                }
            }
            temp = temp->next;
        }
        temp = head;
        mini = (0-mini);
        for (int i=mini;i>=1;i--){
            if (neg[i] != 0){
                while (neg[i]--){
                    temp->data = -i;
                    temp = temp->next;
                }
            }
        }
        for (int i=0;i<=maxi;i++){
            if (pos[i] != 0){
                while (pos[i]--){
                    temp->data = i;
                    temp = temp->next;
                }
            }
        }
        return head;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{

	int t = 0;
	int n = 0;
	cin >> t;
	while (t--)
	{
		Node* head = NULL;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			// push(&head, a);
		}
		for (int i = n - 1; i >= 0; i--)
		{
			push(&head, arr[i]);
		}
		// printList(head);
		
		Solution ob;
		head=ob.sortList(head);

		printList(head);

	}
	return 0;
}

// } Driver Code Ends