
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum=0,sum1=0,num1,num2,sol;
        
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                sum=sum+i;
            }
        }
         num1=sum;

          for(int i=1;i<=n;i++){
            if(i%m==0){
                sum1=sum1+i;
            }
        }
         num2=sum1;

         sol=num1-num2;

         return sol;
    }
};