class Solution {
public:
    int bitwiseComplement(int n) {
        int rem,mul=1,ans=0;
   
    if(n==0)
    return 1;
   
   
   while(n)
   {
   
    rem=n%2;
    
    rem=rem^1;

    n=n/2;
   
    ans=ans+rem*mul;

    mul=mul*2;

   }

   return ans;

    }
};