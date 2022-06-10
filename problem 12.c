#include<stdio.h>
int main()
{
  int sell,profit,cost;
  double cost_per_one;
  printf("enter selling price and profit of 15 items: \n");
  scanf("%d%d,&sell,&profit");
  cost=sell-profit;
  cost_per_one=cost/15;
  printf("cost per one item : %.2lf Taka\n",cost_per_one);

return 0;
}
