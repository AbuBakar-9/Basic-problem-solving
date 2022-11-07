#include <stdio.h>

int main()
{
int n,n1,n2,fibo;
n1=0;
n2=1;

scanf("%d",&n);

for(int i=0;i<=n;i++){

    if(i<=1){

       fibo=i;
    }else{

         fibo=n1+n2;
         n1=n2;
         n2=fibo;
    }

  printf("%d ",fibo);


}


return 0;

}
