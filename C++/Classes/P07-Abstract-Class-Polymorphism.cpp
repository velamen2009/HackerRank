class LRUCache : public Cache{
public:
    LRUCache(int capacity){
        cp = capacity;
        tail = NULL;
        head = NULL;
    }
    void set(int key, int value){
        if(cp <= 0){ return; }
        if(NULL == head){
            head = new Node(key, value);
            tail = head;
            mp.insert(make_pair(key, head));
        }
        else{
            map<int, Node*>::iterator it = mp.find(key);
            if(it != mp.end()){
                Node *p = it->second;
                if(p != head){
                    p->prev->next = p->next;
                    if(NULL != p->next){
                        p->next->prev = p->prev;
                    }
                    else{
                        tail = p->prev;
                    }
                    p->prev = NULL;
                    p->next = head;
                    p->value = value;
                    head->prev = p;
                    head = p;
                }
                else{
                    head->value = value;
                }
            }
            else{
                if(mp.size() >= cp){
                    mp.erase(mp.find(tail->key));
                    Node *q = tail;
                    tail = tail->prev;
                    tail->next = NULL;
                    delete q;
                }
                Node *p = new Node(NULL, head, key, value);
                head->prev = p;
                head = p;
                mp.insert(make_pair(key, p));
            }
        }
    }
    int get(int key){
        map<int, Node*>::iterator it = mp.find(key);
        if(mp.end() == it){
            return -1;
        }
        Node *p = it->second;
        if(p != head){
            p->prev->next = p->next;
            if(NULL != p->next){
                p->next->prev = p->prev;
            }
            else{
                tail = p->prev;
            }
            p->prev = NULL;
            p->next = head;
            head->prev = p;
            head = p;
        }
        return it->second->value;
    }
};