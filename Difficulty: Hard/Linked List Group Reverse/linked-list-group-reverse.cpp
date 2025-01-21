//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node* modifyValues(Node* head,vector<int>result){
        Node* temp = head;
        int ind = 0 , n = result.size();
        while(temp != NULL and ind < n){
            temp->data = result[ind++];
            temp = temp->next;
        }
        return head;
    }
    void doReverse(vector<int>&result,int low,int high){
        while (low < high){
            int val = result[low];
            result[low] = result[high];
            result[high] = val;
            low++ , high--;
        }
    }
    void customReverse(vector<int>&result,int k){
        int n = result.size(), i = 0, j = k;
        while (i<n and j<n){
            doReverse(result,i,j-1);
            i = j;
            j += k;
        }
        if (i < n){
            doReverse(result,i,n-1);
        }
    }
    vector<int>getValues(Node *head){
        Node* temp = head;
        vector<int>result;
        while (temp != NULL){
            result.push_back(temp->data);
            temp = temp->next;
        }
        return result;
    }
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if (head->next == NULL or k == 1) return head;
        vector<int>result = getValues(head);
        customReverse(result,k);
        return modifyValues(head,result);
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main(void) {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.reverseKGroup(head, k);
        printList(head);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends