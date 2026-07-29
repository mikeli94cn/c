void insert_sort(int arr[], int arr_len){
    for(int i=2;i<=arr_len;i++){
        int val=arr[i-1];
        int j=i-1;
        for(;arr[j-1]>val;j--){
            arr[j]=arr[j-1];
        }
        arr[j]=val;
    }
}
