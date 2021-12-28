class MyLinkedList {
public:
    class Node{
        public:
        int val;
        Node* next = NULL;
        Node(int v){
            val = v;
        }
    };
    
    Node* head;
    int size;

    MyLinkedList() {
        head = NULL;
        size = 0;
    }
    
    int get(int index) {
        if(index >= size || index<0 ){ return -1; }
        
        Node* curr = head;
        for(int i = 0; i < index; i++){
            curr = curr->next;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size,val);
    }
    
    void addAtIndex(int index, int val) {
        if(index <0 || index > size){ return;}
        
        Node *curr = head;
        Node *temp = new Node(val);
        if(index == 0){
            temp->next = head;
            head = temp;
        }else{
            for(int i=0 ; i<index-1; i++){
                curr = curr->next;
            }
            temp->next = curr->next;
            curr->next = temp;
        }
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index <0 || index >= size){ return;}
        Node *curr = head;
        if(index == 0){
            Node *temp = curr;
            curr = curr->next;
            head = curr;
            delete temp;
        }
        else{
            for(int i =0 ;i< index-1 ; i++){
                curr = curr->next;
            }
            Node *temp = curr->next;
            if(curr->next)
                curr->next = curr->next->next;
            delete temp;
        }
        
        size--;
    }
};