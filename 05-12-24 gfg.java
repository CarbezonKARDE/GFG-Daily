class Solution {
    public void sort012(int[] arr) {
        int beg=0, end=arr.length-1, i=0;
        while(i<=end){
            if(arr[i]==0){
                swap(arr,i, beg);
                beg++;
                i++;
            }
            else if(arr[i]==2){
                swap(arr, i, end);
                end--;
            }
            else {
                i++;
            }
        }
    }
    static void swap(int[] arr, int i, int j){
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }
}
