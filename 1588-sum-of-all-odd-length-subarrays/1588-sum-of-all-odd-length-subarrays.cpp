class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int a[n+2];
        a[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            a[i]=a[i-1]+arr[i];
        }
        int ans=a[n-1];
        cout<<a[n-1]<<endl;
        int in=2;
        int j=0;
        while(in<n)
        {
            int k=0;
            for(int i=in;i<n;i=i+1)
            {
                
                if(k>0)
                {
                   ans+=a[i]-a[j]; 
                    j++;
                }
                else
                {
                    ans+=a[i];
                }
                k++;
            }
            j=0;
            in+=2;
        }
        return ans;
    }
};