/*
采用C语言实现以下计算：
已知每斤苹果价格5元，现在通过输入顾客购买的苹果重量（斤，整数）。计算出顾客需要支付的总金额，打印输出。
*/
#include <stdio.h>
int main()
{
    int apple_price = 5;
    int apple_weight;
    printf("请输入苹果重量(斤)：");
    scanf("%d", &apple_weight);
    printf("苹果的单价为%d/斤,总价为%d元\n", apple_price, apple_weight * apple_price);
    return 0;
}
