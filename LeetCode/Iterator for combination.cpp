class CombinationIterator {
public:
    queue<string> nxt; 
    void mkvctr(string s,int l ,string curr,int ind)
    {
        if(l==0) { nxt.push(curr); return;}
        
        for(int i=ind;i<=s.length()-l;i++)
        {
            curr+=s[i];
            mkvctr(s,l-1,curr,i+1); 
            curr=curr.substr(0,curr.length()-1); 
        }
        return;
    }
     
    CombinationIterator(string chr, int cl) {
        mkvctr(chr,cl,"",0);  //generate all combination
    }
    
    string next() {
        string d=nxt.front();
        nxt.pop();
        return d;
    }
    
    bool hasNext() {
        return !nxt.empty();
    }
};


/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
