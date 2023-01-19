class Node{
    public:
    Node *arr[29];
    bool flag = false;
    bool hasNext(char ch){
        if(arr[ch-'a']!=NULL)return true;
        return false;
    }
    void put(char ch, Node *node){
        arr[ch-'a']=node;
    }
    Node *getNext(char ch){
        return arr[ch-'a'];
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }

};
class Trie {
    Node *root;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node *node = root;
        for(char ch: word){
            if(!node->hasNext(ch)){
                node->put(ch,new Node());
            }
            node = node->getNext(ch);
        }
        node->setEnd();
    }
    
    bool search(string word) {
        Node *node = root;
        for(char ch:word){
            if(!node->hasNext(ch))return false;
            node = node->getNext(ch);
        }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node *node = root;
        for(char ch:prefix){
            if(!node->hasNext(ch))return false;
            node = node->getNext(ch);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
