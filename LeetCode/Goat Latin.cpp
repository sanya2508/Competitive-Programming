class Solution {
public:
     string toGoatLatin(string S) {
        string word;int i=1;string add="ma";
        istringstream iss(S);string ns="";
        
        while(iss>>word)
        {
            if(word.at(0)=='a'||word.at(0)=='e'||word.at(0)=='i'||word.at(0)=='o'||word.at(0)=='u'||word.at(0)=='A'||word.at(0)=='E'||word.at(0)=='I'||word.at(0)=='O'||word.at(0)=='U')
            {word+=add;}
            else{word=word.substr(1,word.length()-1)+word.substr(0,1)+add;}
           for(int j=1;j<=i;j++){word+="a";} 
            if(i==1)
            ns=ns+word;
            else ns=ns+" "+word;
            i++;
        }
        return ns;
    }
};
