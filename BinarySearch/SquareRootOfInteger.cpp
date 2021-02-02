int Solution::sqrt(int A) {
        if(A == 0){
            return 0;
        }
        int l = 1, h = A,c;
        while(l<=h){
            int mid = (l+h)/2;
            if(mid <= A/mid){
                l = mid + 1;
                c = mid;
            }
            else{
                h = mid - 1;
            }
        }
        return c;
}
