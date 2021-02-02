vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector <int> C;
    vector <int> D;
    int n = A.size();
    int l = 0,h = n-1;
    
    int c =0,k = 0;
    while(l<=h){
        int mid = (l+h)/2;
        if(A[mid] == B){
            int p = mid, p1 = mid;
            while(p>=0&&A[p] == B){
                p--;
            }
                C.push_back(p++);
            
            while(p1<n && A[p1] == B){
                p1++;
            }
           
                C.push_back(p1--);
              
            return C;
            
        }
        if(A[mid] > B){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    D.push_back(-1);
    D.push_back(-1);
    return D;
}
