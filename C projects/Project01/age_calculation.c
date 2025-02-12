#include<stdio.h>
#include<conio.h>


//Auther : sarwon jung kunwar
//Purpose : to calculate age, BS to AD, AD to BS.

void age();
void bstoad();
void adtobs();

int main(){

    char ch;
    int opt;
    
do{
      
    printf("\n\n-------------------------------------------------\n");
    printf("\t\tAGE calculation");
    printf("\n-------------------------------------------------\n");

    printf("\n\n\t1.age calculation\t 2.BS to AD\n\n\t3.AD to BS\t\t 4.Exit\n\n");
    printf("Enter : ");
    fflush(stdin);
    scanf("%d",&opt);
    if(opt <= 0 || opt >= 5){
        printf("\n\n\t\tWrong input !!!\n\n\n");
        ch = 'y';
    }
    switch(opt){

        case 1:
        age();
        printf("\n\nPRESS [ y/n ] : ");
        fflush(stdin);
        scanf("%c",&ch);
        break;

        case 2:
        bstoad();
        printf("\n\nPRESS [ y/n ] : ");
        fflush(stdin);
        scanf("%c",&ch);
        break;

        case 3:
        adtobs();
        printf("\n\nPRESS [ y/n ] : ");
        fflush(stdin);
        scanf("%c",&ch);
        break;

        case 4:
        printf("process end !!!\n\n");
        break;


    }


if(ch == 'y'){

}else if(ch == 'n'){
    return 0;
}

}while(opt != 4); 
    

    return 0;
}void age(){
    
    int age,dob;
    int op;

    printf("\n\nchose the method\n\n");
    printf("1.age calculation by bs\n2.age calculation by ad.");
    printf("\n\nEnter : ");
    scanf("%d",&op);

switch(op){

    case 1:

   printf("\n\nEnter the date of birth in BS : ");
    fflush(stdin);
    scanf("%d",&dob);
    age = 2080-dob;
    printf("\nYour age is : %d\n",age);
    break;

    case 2:

    printf("\n\nEnter the date of birth in AD : ");
    fflush(stdin);
    scanf("%d",&dob);
    age = 2023-dob;
    printf("\nYour age is : %d\n",age);

    break;
}


}void bstoad(){
    int dob,i,year;
    system("cls");
        printf("\n_________________________________________________________\n");
        printf("\n\t\t     BS to AD Converting");
        printf("\n_________________________________________________________\n");

        for (i = 0; i <= 10; i++)
        {
            printf("\n");
            if (i == 2)
            {
                printf("NOTE :");
            }
            if (i == 3)
            {
                    
                    printf("\t\tAccording to the Wikipedia \n");
                    printf("\nBS : Bikram Sambat is a calendar which is denoted \n     by Hindu calendar. Example date [ 2060 ]");
                    printf("\n\n    It is generally 57 years ahead of Gregorian Calendar,\n  except during January to April, when it is ahead by 56 \n    years. .");
                    printf("\n\n\nAD : The Geologic Calendar is a scale in which the\n    geological lifetime of the Earth is mapped onto\n    a calendrical year. Example date [ 2003 ]");
                    printf("\n\n     Which is used in India or other country.");
            }
            if(i == 5){
               printf("\n_________________________________________________________\n");
               printf("\n\t\tEnter the date of birth in BS ");
               printf("\n_________________________________________________________\n"); 

            }
            
        }
        printf("Enter : ");
        scanf("%d",&dob);
        year = dob - 56;
        //printing date of birth in ad
         system("cls");

            printf("\n_________________________________________________________\n");
            printf("\n\t\t     BS to AD Converting");
            printf("\n_________________________________________________________\n");
            for (i = 0; i <= 10; i++)
            {
                printf("\n");

                if (i == 2)
                {
                    printf("BS Date of birth : [ %d ]", dob);
                }
                if (i == 5)
                {
                    printf("\nAD Date of birth : According to %d Your AD is %d. \n", dob, year);
                }
                if (i == 8)
                {
                    printf("\n_________________________________________________________\n");
                    printf("\n\t\t  Thank you for using. ");
                    printf("\n_________________________________________________________\n");
                }
            }




}void adtobs(){

    int age,dob;
    int op,year,i;
    
 system("cls");
        printf("\n_________________________________________________________\n");
        printf("\n\t\t     AD to BS Converting");
        printf("\n_________________________________________________________\n");

        for (i = 0; i <= 10; i++)
        {
            printf("\n");
            if (i == 2)
            {
                printf("NOTE :");
            }
            if (i == 3)
            {
                    
                    printf("\t\tAccording to the Wikipedia \n");
                    printf("\nBS : Bikram Sambat is a calendar which is denoted \n     by Hindu calendar. Example date [ 2060 ]");
                    printf("\n\n    It is generally 57 years ahead of Gregorian Calendar,\n  except during January to April, when it is ahead by 56 \n    years. .");
                    printf("\n\n\nAD : The Geologic Calendar is a scale in which the\n    geological lifetime of the Earth is mapped onto\n    a calendrical year. Example date [ 2003 ]");
                    printf("\n\n     Which is used in India or other country.");
            }
            if(i == 5){
               printf("\n_________________________________________________________\n");
               printf("\n\t\tEnter the date of birth in AD ");
               printf("\n_________________________________________________________\n"); 

            }
            if(i == 7){
                printf("Enter : ");
                scanf("%d",&dob);
            }
            
        }
        
        year = dob + 56;
        //printing date of birth in BS
         system("cls");

            printf("\n_________________________________________________________\n");
            printf("\n\t\t     AD to BS Converting");
            printf("\n_________________________________________________________\n");
            for (i = 0; i <= 10; i++)
            {
                printf("\n");

                if (i == 2)
                {
                    printf("AD Date of birth : [ %d ]", dob);
                }
                if (i == 5)
                {
                    printf("\nBS Date of birth : According to %d Your BS is %d. \n", dob, year);
                }
                if (i == 8)
                {
                    printf("\n_________________________________________________________\n");
                    printf("\n\t\t  Thank you for using. ");
                    printf("\n_________________________________________________________\n");
                }
            }

    }


