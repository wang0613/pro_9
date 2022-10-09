#include <stdio.h>

//实现冒泡排序
//对数组进行传参时，实际上传递的是首元素的地址
void bubble_sort(int arr[],int sz) {
    //确定冒泡排序的躺数
    for (int i = 0; i < sz-1; i++) {
        //每一趟的冒泡排序
        for (int j = 0; j < sz-1 - i; j++) {
            //比较相邻元素  交换元素
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main() {

    int arr[] = {1, 3, 34, 5, 51, 5, 6};

    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);


    for (int i = 0; i< sz; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}
