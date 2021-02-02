int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n = A.size();
    for(int i =0;i<n ;i++){
        for(int j = 0;j<A[i].size();j++){
            if(A[i][j] == B){
                return 1;
                break;
            }    
        }
    }
    return 0;
    
}
