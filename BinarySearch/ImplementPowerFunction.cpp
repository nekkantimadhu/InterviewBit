#include<math.h>
int Solution::pow(int x, int n, int p) {
    
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(n == 0){
        return 1%p;
    }
    long long int k = std::pow(x,n) ;
    long long int k1 = k%p;
    if(k1<0){
        k1 = (k1 + p) %p; 
    }
    return k1;
    
    
}
