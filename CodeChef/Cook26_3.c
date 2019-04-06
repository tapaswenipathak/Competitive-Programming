#include<stdio.h>
#include<string.h>
int main()
{
 char str[1000001];
 int Len,left,right,Res,T;
 scanf("%d",&T);
 while(T--){
            scanf("%s",str);
            Res=1;
            for(left=0,right=(strlen(str)-1);left<right;++left,--right){
                       if((str[left]!='?')&&(str[right]!='?')){
                                   if(str[left]!=str[right]){
                                               Res=0;
                                               break;
                                    }
                        }
                        else if(str[left]=='?' && str[right]=='?'){
                                    Res*=26;
                                    Res%=10000009;
                        }
            }
            if((left==right)&&(str[left]=='?')){
                        Res*=26;
                        Res%=10000009;
            }
            printf("%d\n",Res);
}
system("pause");
return 0;
}
