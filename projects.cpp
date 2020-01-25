#include<stdio.h>
using namespace std;
main()
{
    int bil1,bil2,bil3,temp;

    printf("Masukan 3 bilangan acak \n");
    scanf("%d",&bil1);scanf("%d",&bil2);scanf("%d",&bil3);

    printf("Bilangan setelah di urutkan adalah = ");

    if(bil1<bil2 && bil1<3){
        if(bil2<bil3){
            printf("%d,%d,%d",bil1,bil2,bil3);
        }else {
            printf("%d,%d,%d",bil1,bil3,bil2);
        }
    } else if (bil2<bil1 && bil2<bil3){
        if(bil1<bil3){
            printf("%d,%d,%d",bil2,bil1,bil3);
        } else {
            printf("%d,%d,%d",bil2,bil3,bil1);
        }
    } else if (bil3<bil1 && bil3<bil2){
        if(bil1<bil2){
            printf("%d,%d,%d",bil3,bil1,bil2);
        } else {
            printf("%d,%d,%d",bil3,bil2,bil1);
        }
    }


}
