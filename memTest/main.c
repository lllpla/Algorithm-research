#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    printf("%d",turns(1238,0,10000));
    return 0;
}


 int turns(int n, int low, int high){
    int turns = 0;
    //����ʣ�¶�����������ʱ����
    while((high-low)>=2){
        //ȡ�м�ֵΪ�µ�����
        turns++;
        int mid = (low +high)/2;
        printf("��ǰ��Χ(%d,%d)", low, high);
        printf("��ǰ����%d\r\n",mid);
        if( mid == n ){
            return turns;
        }else if( mid > n ){
            high = mid - 1;
        }else if( mid < n ){
            low = mid + 1;
        }
    }
    printf("��ǰ��Χ(%d,%d)\r\n", low, high);
    return 1+turns;
 }
