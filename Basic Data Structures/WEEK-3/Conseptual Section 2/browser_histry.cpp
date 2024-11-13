class Node{
public:
    string val;
    Node* next;
    Node* prev;
    Node(string val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class BrowserHistory {
public:
    Node* cur = NULL;
    BrowserHistory(string homepage) {
        this->cur = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);
        cur->next = newNode;
        newNode->prev = cur;
        cur = newNode; 
    }
    
    string back(int steps) {
        while(cur->prev!=NULL && steps>0){
            cur = cur->prev;
            steps--;
        }
        return cur->val;
    }
    
    string forward(int steps) {
        while(cur->next!=NULL && steps>0){
            cur = cur->next;
            steps--;
        }
        return cur->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */