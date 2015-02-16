#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    printf("%d",turns(1238,0,10000));
    return 0;
}


 int turns(int n, int low, int high){
    int turns = 0;
    //当还剩下多于两个数字时继续
    while((high-low)>=2){
        //取中间值为猜的数字
        turns++;
        int mid = (low +high)/2;
        printf("当前范围(%d,%d)", low, high);
        printf("当前猜数%d\r\n",mid);
        if( mid == n ){
            return turns;
        }else if( mid > n ){
            high = mid - 1;
        }else if( mid < n ){
            low = mid + 1;
        }
    }
    printf("当前范围(%d,%d)\r\n", low, high);
    return 1+turns;
 }
