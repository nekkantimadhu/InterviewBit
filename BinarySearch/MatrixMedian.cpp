int Solution::findMedian(vector<vector<int> > &A) {
    vector <int> B;
    int n= A.size();
    int m = A[0].size();
    int k =0;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            B.push_back(A[i][j]);
           
        }
    }
    
    sort(B.begin(),B.end());
    int n1 = B.size();
   
    int k1 = n1/2;
    
    return B[k1];
}
