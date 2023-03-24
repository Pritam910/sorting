//FIRST YOU NEED TO CREATE A FILE AND NAME IT BY"NAME.H" AND THEN WRITE YOUR FUNCTION....
void bubbleSort(int arr[], int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
