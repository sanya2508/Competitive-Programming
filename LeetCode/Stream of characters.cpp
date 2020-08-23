class TrieNode{
    public:
    bool end = false;
    TrieNode* child[26]{};
    
    TrieNode* get(char c){
        return child[c-'a'];
    }
   
    void add(char c){
        child[c-'a'] = new TrieNode;
    }
};

class StreamChecker {
public:
    string str;
    TrieNode *root;
     void rev_insert(string &word) {
        TrieNode* p = root;
        for(int i = word.size() - 1; i >=0 ; --i){
            auto c = word[i];
            if(!p->get(c)) p->add(c);
            p = p->get(c);
        }
        p->end = true;   
     }
    /** Returns if the word is in the trie. */
    bool rev_search(string &word, int pos){
        TrieNode* p = root;
        for(int i = pos; i >= 0; --i){
            auto c = word[i];
            if(!p->get(c)) return false;
            p = p->get(c);
            if (p->end) return true;
        }
        return p && p->end;
     }
 
    StreamChecker(vector<string>& words) {
        root = new TrieNode;
        for (auto &w:words){ 
            rev_insert(w);
        }
    }
    
    bool query(char letter) {
        str += letter;
        return rev_search(str, str.size() - 1);
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
