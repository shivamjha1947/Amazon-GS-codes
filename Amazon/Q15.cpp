void linkdelete(struct Node  *head, int M, int N){
    Node* node = head;
    while(node != NULL) {
        for(int i = 1; i < M && node != NULL; ++i) {
            node = node->next;
        }
        if(node == NULL) return;
        Node* ref = node;
        for(int i = 0; i <= N && node != NULL; ++i) {
            node = node->next;
        }
        ref->next = node;
    }
}
