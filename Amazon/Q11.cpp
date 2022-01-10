vector<int> serialize(Node *root) 
{
    if(root == NULL) {
        return {};
    }

    vector<int> left = serialize(root->left);
    vector<int> right = serialize(root->right);

    vector<int> ans;

    // preallocate memory
    ans.reserve(left.size() + right.size() + 1);
    ans.insert(ans.end(), left.begin(), left.end());
    ans.push_back(root->data);
    ans.insert(ans.end(), right.begin(), right.end());

    return ans;
}

Node * deSerialize(vector<int> &A)
{
    int N = A.size();

    if(N == 1) {
        Node* root = new Node(A[0]);
        return root;
    }
    if(N == 2) {
        Node* left = new Node(A[0]);
        Node* root = new Node(A[1]);
        root->left = left;
        return root;
    }

    Node* left = new Node(A[0]);
    Node* root = new Node(A[1]);
    Node* right = new Node(A[2]);

    root->left = left;
    root->right = right;

    for(int i = 3; i < N; i += 2) {
        Node* new_root = new Node(A[i]);
        Node* new_right = i == N-1 ? NULL : new Node(A[i + 1]);

        new_root->left = root;
        new_root->right = new_right;

        root = new_root;
    }

    return root;
}
