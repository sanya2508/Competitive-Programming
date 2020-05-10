#include <bits/stdc++.h>

using namespace std;
int main() {
    int hh,mm,ss;char ch[3];
    scanf("%d:%d:%d%s",&hh,&mm,&ss,ch);
    if(ch[0]=='A' && hh==12)hh=0;
    if(ch[0]=='P' && hh!=12)hh+=12;
    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}
