/*
一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
*/
class Solution {
public:
    int jumpFloor(int number) {
 
        if (number<=0)
            return 0;
        int a[100000];
           a[0]=1;
           a[1]=1;
         for (int i =2;i<=number;i++)
         {
             a[i]=a[i-1]+a[i-2];
             
         }
            return a[number];
    }
};
