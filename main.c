#include <stdio.h>

//ʵ��ð������
//��������д���ʱ��ʵ���ϴ��ݵ�����Ԫ�صĵ�ַ
void bubble_sort(int arr[],int sz) {
    //ȷ��ð�����������
    for (int i = 0; i < sz-1; i++) {
        //ÿһ�˵�ð������
        for (int j = 0; j < sz-1 - i; j++) {
            //�Ƚ�����Ԫ��  ����Ԫ��
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
