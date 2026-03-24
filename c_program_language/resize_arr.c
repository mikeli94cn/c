#define 

int* resize_arr(int* arr,int len);


void main()
{
	int* arr=malloc(sizeof(int)*5);
	arr[0]=88;
	arr[1]=7;
	arr[2]=59;
	arr[3]=6;
	arr[4]=3;

	print_arr(arr,sizeof(arr)/sizeof(int));
	arr=resize_arr(arr,sizeof(arr)/sizeof(int));
	
}

int* resize_arr(int* arr,int len)
{
	int* new_arr=malloc(sizeof(int)*len*2);
	init_arr(new_arr);
	copy_arr(arr,new_arr,len);
	return new_arr;
