void array_shift(int arr[], int size, int n)
{
    if(n >= size)
    {
        n = n % size;
    }
    if(n <= 0)
    {
      return;
    }
   int temp[n];
    for(int i = 0; i < n; ++i)
    {
        temp[i] = arr[i];
    }
    for(int i = 0; i < size - n; ++i)
    {
        arr[i] = arr[n + i];
    }
    for(int i = 0; i < n; ++i)
    {
        arr[size-n + i] = temp[i];
    }
    
    
}
void reset_array(int arr[], const int original[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = original[i];
    }
}
