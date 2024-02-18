#include <stdio.h>
int main() {
    int num;
    for (int i = 0; i <6; i++) {
        int k=4; 
        num=i; 
        for(int j=0;j<i;j++){      
        if((i>1)&&(j>0)){          
            printf("%d ",num+k);
            num=num+k;
            k--;
        }
        else{  
          printf("%d ",i);
        }
      }
        printf("\n");
    }
    return 0;
}
