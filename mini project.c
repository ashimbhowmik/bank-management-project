#include<stdio.h>
#include<conio.h>
#include<math.h>
int list();
void diposite();
void last();
void transfer();
void withdrow();
void logic();
void logic_2();
void name();
void add_code();
void checkDetails();
void Fixed_Money();
void new_acc();
int TotalAmount,Amount,Amo,Tr,TotalDiposite=0,TotalWithdrow=0,TotalTr=0,Acc;
int main_exit,a1,a2,a3,a4,a5,a6,a7,a8,a9,b2,b3,b5;
char b1[50],a[100];

void main()
{
    system("color 4");
    printf("\n\n\t\t***************\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  BANK MANAGEMENT SYESTEM  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2****************");
    printf("\n\n\n\t\t    ***************\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    TEAM DE-CODER    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2****************");
    password();
}

void password()
{
    char x[15]; // password:- decoder123
    printf("\n\n\n\t\t\t\t\t   Enter the password to login:");
    scanf("%s",&x);
    if (x[0]=='d' && x[1]=='e' && x[2]=='c' && x[3]=='o' && x[4]=='d' && x[5]=='e' && x[6]=='r' && x[7]=='1' && x[8]=='2' && x[9]=='3'){
            printf("\n\t\t\t\t\t\t  Password Match!");
        }
    else
        {
            int y;
            printf("\n\nWrong password!!");
            printf("\n\t\t\t\t\tPress 1 to Return to LOGIN again : ");
            scanf("%d",&y);
            if(y==1){
                system("cls");
                main();
            }
            else{
                printf("\nInvalid!......................................\n\n");
                exit(0);
            }
        }
    add_code();
}

void add_code()
{
    while(1)
    {
    switch(list())
        {
            case 1:
                name();
                new_acc();
                break;
            case 2:
                withdrow();
                if(Amo<=TotalAmount)
                TotalWithdrow+=Amo;
                logic();
                break;
            case 3:
                transfer();
                if(Tr<=TotalAmount)
                TotalTr+=Tr;
                logic();
                break;
            case 4:
                diposite();
                TotalDiposite+=Amount;
                logic();
                break;
            case 5:
                Fixed_Money();
                break;
            case 6:
                checkDetails();
                logic_2();
                break;
            case 7:
                last();
                getch();
                exit(0);
            default:
                printf("\nInvalid: ID choice  Press any Key ");
                getch();
                system("cls");
        }
    }
}

int list()
{
    int ch;
    system("color 2");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\n\t\t\t1. New Account: ");
    printf("\n\t\t\t2. Withdrow Amount: ");
    printf("\n\t\t\t3. Transfer Amount: ");
    printf("\n\t\t\t4. Diposite Amount: ");
    printf("\n\t\t\t5. Fixed Money: ");
    printf("\n\t\t\t6. Check Details: ");
    printf("\n\t\t\t7. Exit: ");
    printf("\n\n\t\t\t Enter your Choice: ");
    scanf("%d",&ch);
    return (ch);

}

void withdrow()
{
    printf("\nEnter the Amount You wish to withdrow: $");
    scanf("%d",&Amo);
    if(Amo<=TotalAmount)
        TotalAmount-=Amo;
    else{
        printf("\nLess Amount Withdrow is not possible: $");
    }
}

void name()
{
    printf("\n\n\tEnter Your name: ");
    fgets(a,100,stdin);
}

void new_acc()
{
    system("color 9");
    system("cls");
    printf("\n\t\t\t\t\xB2\xB2\xB2\ CREATE ACCOUNT \xB2\xB2\xB2\xB2");
    name();
    printf("\n\tEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&a1,&a2,&a3);
    printf("\n\tEnter your Account Number: ");
    scanf("%d",&Acc);
    printf("\n\tEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d",&a6,&a7,&a8);
    printf("\n\tEnter the age:");
    scanf("%d",&a9);
    printf("\n\tEnter the address:");
    scanf("%s",&b1);
    printf("\n\tInput your Fixed Money: $");
    scanf("%d",&TotalAmount);
    printf("\n\tEnter the citizenship number:");
    scanf("%d",&b2);
    printf("\n\tEnter the phone number: ");
    scanf("%d",&b3);
    printf("\n\n\tAccount created successfully!");
    printf("\n\n\n\t\tPress 1 to Back Main Menu or Press 0 to Back Login:");
    scanf("%d",&main_exit);
    if (main_exit==1){
        system("cls");
        }
    else if(main_exit==0){
           system("cls");
           main();
        }
    else
        {
            printf("\n\t\t Invalid!......................................");
            exit(0);
        }
}

void diposite()
{
    printf("\nEnter the Amount you want to diposite: $");
    scanf("%d",&Amount);
    TotalAmount+=Amount;
}

void checkDetails()
{
    system("cls");
    printf("\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2 Details of Your Bank Account \xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\n\tYour Name=%s\n",a);
    printf("\n\tYour address: %s",b1);
    printf("\n\n\tYour phone number: +880%d",b3);
    printf("\n\n\tYour date of birth: %d/%d/%d",a6,a7,a8);
    printf("\n\n\tAccount Number=%d",Acc);
    printf("\n\n\tTotal Amount=%d",TotalAmount);
    printf("\n\n\t#Fixed Your Money (for %d year)",b5);
    printf("\n\n\tTotal Diposited Amount=%d",TotalDiposite);
    printf("\n\n\tTotal Withdrow Amount=%d",TotalWithdrow);
    printf("\n\n\tTotal Transfer Amount=%d",TotalTr);

}

void Fixed_Money()
{
    system("color 9");
    system("cls");
    printf("\n\tType of account:\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:");
    scanf("%d",&b5);
    if(b5==1){
        printf("\n\t#Fixed1(for 1 year)");
        logic_2();
    }
    else if(b5==2){
        printf("\n\t#Fixed2(for 2 year)");
        logic_2();
    }
    else if(b5==3){
        printf("\n\t#Fixed3(for 3 year)");
        logic_2();
    }
    else{
        printf("\n\tSaving is not completed");
        logic_2();
    }
}

void logic_2()
{
     printf("\n\n\tPress 1 to Back Main Menu or Press 0 to Back Login again : ");
     scanf("%d",&a5);
     if(a5==1){
        system("cls");
    }
     else if(a5==0){
        system("cls");
        main();
    }
     else{
        printf("\n\tInvalid!......................................\n");
        exit(0);
    }
}

void transfer()
{
    printf("\nEnter the amount you want to transfer: $");
    scanf("%d",&Tr);
    if(Tr<=TotalAmount){
        TotalAmount-=Tr;
    }
    else{
        printf("\nLess Amount Transfer is not Possible: $");
    }
}

void logic()
{
    int z;
    system("color 2");
    printf("\n\n\t\t Save Successfully...................");
    printf("\n\t\t Press 1 to Back Main Menu or Press 0 to Back Login: ");
    scanf("%d",&z);
    if(z==1){
          system("cls");
    }
    else{
        if(z==0){
           system("cls");
           main();
        }
        else{
           printf("\n\t\t Invalid!......................................\n");
           exit(0);
        }
    }
}

void last()
{
    system("color 4");
    system("cls");
    printf("\n\n\n\t\t\t\t\t**************************************\n");
    printf("\n\t\t\t\t This Mini Project is developed by TEAM DE-CODER!");
    printf("\n\n\t\t\t\t\t     **********THANKS**********\n\n\n");
    exit(0);
}
