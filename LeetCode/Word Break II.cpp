class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
       	unordered_set<string> dict;
       	for (auto w : wordDict) {
       		dict.insert(w);
       	}

       	vector<string> sentences;
       	unordered_map<int, vector<string>> cache;
       	dfs(s, 0, dict, sentences, cache);
       	return sentences;
    }

    void dfs(string &s, int idx, unordered_set<string> &dict, vector<string> &sentences, unordered_map<int, vector<string>> &cache) {
    	int n = s.length();
    	if (n == idx) {
    		sentences.push_back("");
    		return;
    	}

    	string word;
    	for (int i = idx; i < n; ++i) {
    		word.push_back(s[i]);
    		if (dict.count(word)) {
    			vector<string> sents;
                if (cache.count(i + 1)) {
                    sents = cache[i + 1];
                } else {
    			    dfs(s, i + 1, dict, sents, cache);
                    cache[i + 1] = sents;
                }
    			for (auto s : sents) {
    				sentences.push_back(word);
    				if (!s.empty()) {
    					sentences.back() += " " + s;
    				}
    			}
    		}
    	}
    }
};
