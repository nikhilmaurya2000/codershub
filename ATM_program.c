#include<stdio.h>
int main(){
    int usr=1111,psw=1234,usr1,psw1,flag=0,attempt=2;
    printf("***********STATE BANK OF INDIA**********\n");
    printf("Enter unique id\n");
    scanf("%d",&usr1);
    printf("Enter your PIN\n");
    scanf("%d",&psw1);
    if(usr1==usr&&psw1==psw)
        {
            printf("\nLOGIN SUCCESSFUL");
            }
    else{
    do
    {
        printf("Incorrect Credentials. Attempts Remaining: %d\n",attempt);
        attempt--;
        printf("Enter unique id\n");
        scanf("%d",&usr1);
        printf("Enter your PIN\n");
        scanf("%d",&psw1);
        //flag++;
        if(usr1==usr&&psw1==psw)
        {
            printf("LOGIN SUCCESSFUL\n");
            break;
        }
        else{
            flag++;
        }
    }while(flag<2);
    }


    if(flag>=2)
	printf("You have exceed the limit of entering incorrect credentials.\n");


return 0;
    }
