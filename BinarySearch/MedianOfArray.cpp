double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    
    int N1 = A.size();
    int N2 = B.size();
    if (N1 < N2) return findMedianSortedArrays(B, A);    // Make sure A2 is the shorter one.
    
    int lo = 0, hi = N2 * 2;
    while (lo <= hi) {
        int mid2 = (lo + hi) / 2;   // Try Cut 2 
        int mid1 = N1 + N2 - mid2;  // Calculate Cut 1 accordingly
        
        double L1 = (mid1 == 0) ? INT_MIN : A[(mid1-1)/2];    // Get L1, R1, L2, R2 respectively
        double L2 = (mid2 == 0) ? INT_MIN : B[(mid2-1)/2];
        double R1 = (mid1 == N1 * 2) ? INT_MAX : A[(mid1)/2];
        double R2 = (mid2 == N2 * 2) ? INT_MAX : B[(mid2)/2];
        
        if (L1 > R2) lo = mid2 + 1;        // A1's lower half is too big; need to move C1 left (C2 right)
        else if (L2 > R1) hi = mid2 - 1;    // A2's lower half too big; need to move C2 left.
        else return (max(L1,L2) + min(R1, R2)) / 2;    // Otherwise, that's the right cut.
    }
    return -1;
    
}
