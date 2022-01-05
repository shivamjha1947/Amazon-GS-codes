int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
   long long int start=0,end=0,count=0,prod=1;
   while(end<n){
       prod*=a[end];
       while(start<n and prod>=k){
           prod=prod/a[start++];
       }
       if(prod<k)
       count+=end-start+1;
       end++;
   }
   return count;
}
