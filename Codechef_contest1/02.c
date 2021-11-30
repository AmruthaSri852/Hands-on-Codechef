#include <stdio.h>
#include <math.h>

int main()
{

   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n,y,c,count=0;
       scanf("%d%d%d",&n,&y,&c);
       int a[n],b[n];
       for (int i=0;i<n;i++)
       { scanf("%d",&a[i]);}
       for (int i=0;i<n;i++)
       { scanf("%d",&b[i]);}
       for (int i=0;i<n;i++)
       {
           int m=a[i]-b[i];
           if (m<0) {m=-m;}
           else {m=m;}
           if (m<=c) {count++;}
       }
       if (count>=y)
       printf("YES\n");
       else printf("NO\n");

   }
   return 0;
}
