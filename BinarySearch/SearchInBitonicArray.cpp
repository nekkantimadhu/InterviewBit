int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int l = 0,h = n-1;
    for(int i =0;i<n;i++){
        if(A[i] == B){
            return i;
            break;
        }
    }
    return -1;
    
}
