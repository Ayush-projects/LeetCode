class MagicDictionary {
public:
    vector<string> v;
    MagicDictionary() {
        
    }
    
    void buildDict(vector<string> dictionary) {
           
        v = dictionary;
    }
    
    bool search(string searchWord) {
        int count = 0;
        for(int i=0; i<v.size(); i++)
        {  
            if(searchWord.length() != v[i].length())
            {
                continue;
            }
            
            for(int j=0; j<searchWord.length(); j++)
            {
                if(searchWord[j] != v[i][j])
                {
                    count++;
                }
            }
            if(count==1)
            {
                return true;
            }
            count = 0;
        }
        return false;
    }
    
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */