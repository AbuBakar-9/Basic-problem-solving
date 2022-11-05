#include <stdio.h>

int main()
{
int n,f,s,fibo;
f=0;
s=1;

scanf("%d",&n);

for(int i=0;i<=n;i++){
    
    if(i<=1){

       fibo=i;
    }else{

         fibo=f+s;
         f=s;
         s=fibo;
    }

  printf("%d ",fibo);
   
   
}


return 0;

}