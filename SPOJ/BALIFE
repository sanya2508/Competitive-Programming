#include<bits/stdc++.h>
using namespace std;
int arr[9050];
int main()
{
    int n, sum, avg, cnt, diff;
    while(scanf("%d",&n)==1)
    {
        if(n == -1)
            break;
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
            sum += arr[i];
        }
        if(sum % n != 0)
            printf("-1\n");
        else
        {
            avg = sum/ n;
            cnt = 0;
            for(int i = 0; i < n-1 ; i++)
            {
                diff = arr[i] - avg;
                arr[i+1] += diff;
                if(diff < 0)
                    diff = -diff;
                cnt = max(cnt,diff);
            }
            printf("%d\n", cnt);
        }
    }
    return 0;
}
