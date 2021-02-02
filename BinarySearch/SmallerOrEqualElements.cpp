int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int l = 0, h = n-1;
    
    int c =0;
    while(l <= h){
        int mid  = (l+h)/2;
        if(A[mid] <= B){
            c = mid+1;
            l = mid +1;
        }
        else{
            h = mid -1;
        }
    }
    return c;
    
}
