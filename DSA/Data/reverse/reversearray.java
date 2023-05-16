
class reversearray(){
    static int arr[] = new int[]{1,2,3,4,5}
    public void reverse(int arr[], int n){
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        end--;
        start++;
    }
    }
    public static void main(String[] args) {
        reverse(arr,5);
        System.out.print(arr);
    }

}

