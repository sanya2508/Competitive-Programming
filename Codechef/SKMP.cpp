#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s,p;
        cin>>s>>p;
        int freqs[26]={};
        const int lens = s.size();
        const int lenp = p.size();
        for(int i=0;i<lens;i++){
            freqs[s[i] - 'a']++;
        }
        for(int i=0;i<lenp;i++){
            freqs[p[i] - 'a']--;
        }
        int index = p[0] - 'a', i;
        char ch;
            for(i=0;i<index;i++){
                ch = i + 'a';
                while(freqs[i]>0){
                    printf("%c",ch);
                    freqs[i]--;
                }
            }
            bool flag = false;
            for(int j=1;j<len_p;j++){
                if(p[j]<p[j-1]){
                    break;
                }
                else if(p[j]>p[j-1]){
                    flag = true;
                    break;
                }
            }
            if(!flag){
            cout<<p;
            for(i = index; i<26; i++){
                ch = i+'a';
                while(freqs[i]>0){
                    printf("%c",ch);
                    freqs[i]--;
                }
            }
            }
            else{
                ch = index+'a';
                while(freqs[index]>0){
                    printf("%c",ch);
                    freqs[index]--;
                }
                cout<<p;
                for(i = index+1; i<26; i++){
                    ch = i+'a';
                    while(freqs[i]>0){
                        printf("%c",ch);
                        freqs[i]--;
                    }
                }
            }
       printf("\n");
    }
    return 0;
}
