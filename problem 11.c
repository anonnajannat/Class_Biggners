#include<stdio.h>
int main()
{
    int ammount,hundred,fifty,ten,aux;
    printf("enter the ammount of taka you want to withdraw: \n");
    scanf("%d",&ammount);
    hundred=ammount/100;
    aux=ammount%100;
    fifty=aux/50;
    aux=aux%50;
    ten- aux/10;
    printf("total ammount:%d\n",ammount);
    printf("%d note of 100 taka\n",hundred);
    printf("%d note of 50 taka\n",fifty);
    printf("%d note of 10 taka\n",ten);

return 0;
}
