#include<stdio.h>
int main()
{   int t;
    scanf("%d",&t);
       while(t--){
         int P,Q,X,Y;
         scanf("%d %d %d %d",&X,&Y,&P,&Q);
          int r=X+P*10;
          int m=Y+Q*10;
         if(r>m){
           printf("Chefina\n");
         }
         if(m>r){
           printf("Chef\n");
         }
         if(r==m){
           printf("Draw\n");
         }
    }
  return 0;
}
