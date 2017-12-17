/*大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项。
n<=39*/

class Solution {
public:
    int Fibonacci(int n) {
        if (n<=0 ||n>39)
            return 0;
        int a[40];
           a[0]=1;
           a[1]=1;
         for (int i =2;i<=n-1;i++)
         { a[i]=a[i-1]+a[i-2];
             
         }
            return a[n-1];
    }
};
