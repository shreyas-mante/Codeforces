




long long merge(int A[], int l , int m, int r)
{
    long long count =0;
    long long i=l;
    long long j=m;
    long long k=0;
    int temp[r-l+1];
    
    while(i<m && j<=r)
    {
        
        if(A[i]<=A[j])
        {
            temp[k]=A[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=A[j];
            k++;
            j++;
            count += m-i;
        }
    }
    
    while(i<m)
    {
        temp[k]=A[i];
        k++;
        i++;
    }
    
    while(j<=r)
    {
        temp[k]=A[j];
        k++;
        j++;
        
    }
    
    for(long long i=l,k=0;i<=r;i++,k++)
    {
        A[i]=temp[k];
    }
    
    return count;

}






long long merge_sort(int A[], int l , int r)
{
    long long count =0;
    
    if(l<r)
    {
        long long mid = (l+r)/2;
        long long ml = merge_sort(A,l,mid);
        long long mr = merge_sort(A,mid+1,r);
        long long mc = merge(A,l,mid+1,r);
        count = ml+mr+mc;
    }
    
    return count;
}








long long solve(int A[], int n)
{
	long long ans = merge_sort(A,0,n-1);
    return ans;
}
