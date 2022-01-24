class MyLinkedList {
public:
    vector<int> ll;
    MyLinkedList() {
        ll.clear();
    }
    
    int get(int index) {
        if(ll.size() == 0) return -1;
        if(index >= 0 && index < ll.size())
            return ll[index];
        
        return -1;
    }
    
    void addAtHead(int val) {
        ll.insert(ll.begin(),val);
    }
    
    void addAtTail(int val) {
        ll.push_back(val);
    }
    
    void addAtIndex(int index, int val) {
        if(index > ll.size()) return;
        ll.insert(ll.begin()+index,val);
    }
    
    void deleteAtIndex(int index) {
        if(ll.size() == 0) return;
        
        if(index >= 0 && index < ll.size())
            ll.erase(ll.begin()+index);
        
        return;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */