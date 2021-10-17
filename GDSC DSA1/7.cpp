void sort012(int a[], int n)
{
       int count1=0,count2=0,count3=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                count1++;
            else if(a[i]==1)
                count2++;
            else
                count3++;
        }
        int j;
        for(j=0;j<count1;j++)
           a[j]=0;
        for(j=count1;j<count1+count2;j++)
            a[j]=1;
        for(j=count2+count1;j<count1+count2+count3;j++)
            a[j]=2;
     
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends