//Not accepting the code by codechef
#include<stdio.h>
int main(){
    int n,winn=0;
    int lead=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int si,ti,sum1=0,sum2=0;
        
        int diff=0;
        scanf("%d %d",&si,&ti);
        sum1+=si;
        sum2+=ti;
        if (sum1>sum2)
        {
            diff=sum1-sum2;
            if (diff>lead)
            {
                lead=diff;
                winn=1;
            }
        }
        else{
        diff=sum2-sum1;
        if (diff>lead)
        {
            lead=diff;
            winn=2;
        }
        }
    }
    printf("%d %d", winn, lead);

    
return 0;
}