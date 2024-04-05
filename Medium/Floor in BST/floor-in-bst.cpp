//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{
private:
    int minDiff = INT_MAX;
    int val = -1;
    void inOrder(Node* root,int x){
        if (root == NULL) return;
        inOrder(root->left,x);
        if (root->data <= x and minDiff > x - root->data){
            minDiff = x - root->data;
            val = root->data;
        } 
        inOrder(root->right,x);
    }
public:
    int floor(Node* root, int x) {
        // Code here
        inOrder(root,x);
        return val;
    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends