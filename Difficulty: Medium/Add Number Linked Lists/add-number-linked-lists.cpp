//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
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

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
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

class Solution {
  public:
    Node* removeHeadingZeros(Node* head){
        while (head != NULL and head->data == 0){
            head = head->next;
        }
        if (head == NULL) return new Node(0);
        return head;
    }
    Node* sum(Node* first, Node* second) {
        int carry = 0;
        Node* Ans = NULL, *it = NULL;
        while (first != NULL and second != NULL) {
            int val = carry + first->data + second->data;
            int lst = val % 10;
            carry = val / 10;
            Node* temp = new Node(lst);
            if (Ans == NULL) {
                Ans = it = temp;
            }
            else {
                it->next = temp;
                it = it->next;
            }
            first = first->next, second = second->next;
        }
        while (first != NULL){
            int val = carry + first->data;
            int lst = val % 10;
            carry = val / 10;
            Node* temp = new Node(lst);
            if (Ans == NULL) {
                Ans = it = temp;
            }
            else {
                it->next = temp;
                it = it->next;
            }
            first = first->next;
        }
        while (second != NULL){
            int val = carry + second->data;
            int lst = val % 10;
            carry = val / 10;
            Node* temp = new Node(lst);
            if (Ans == NULL) {
                Ans = it = temp;
            }
            else {
                it->next = temp;
                it = it->next;
            }
            second = second->next;
        }
        if (carry) { 
            Node* temp = new Node(carry);
            it->next = temp;
            it = it->next;
        }
        return Ans;
    }
    Node* reverse(Node* num) {
        Node* cur = num, *prev = NULL;
        while (cur != NULL){
            Node* nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        return prev;
    }
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        Node* first = reverse(num1);
        Node* second = reverse(num2);
        Node* ans = sum(first, second);
        ans = reverse(ans);
        ans = removeHeadingZeros(ans);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends