void select_sort(int arr[], int arr_len){
    int min_pos=-1;
    for(int i=1;i<=arr_len-1;i++){
        min_pos=i;
        for(int j=i;j<=arr_len;j++){
            if(arr[min_pos-1]>arr[j-1]){
                min_pos=j;
            }
        }
        int temp=arr[i-1];
        arr[i-1]=arr[min_pos-1];
        arr[min_pos-1]=temp;
    }
}
