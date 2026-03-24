int fab(int n)
{
    if(n==1 || n==2)
        return 1;
    else
        return fab(n-1)+fab(n-2);
}

int main(int num)
{
    //printf("%d\n",fab(1));
    //printf("%d\n",fab(2));
    //printf("%d\n",fab(3));
    printf("%d\n",fab(num));
}