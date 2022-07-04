class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
       unordered_map<int,int>hmp;
       for(int i=0;i<n;i++){
           hmp[a[i]]++;
           if(hmp[a[i]]==k) return a[i];
       }
       return -1;
    }
};

