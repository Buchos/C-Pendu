#include <stdio.h>
#include <stdlib.h>

int main()
{   // TABLEAU EX 4 //
    /*int i_tab[10]={2,3,9,5,1,10,16,5,3,12};
    int i=0,j=0;
    int i_temp=0;

    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(i_tab[i]>i_tab[j])
            {
                i_temp=i_tab[i];
                i_tab[i]=i_tab[j];
                i_tab[j]=i_temp;
            }
        }
    }

    for(i=0;i<2;i++)
    {
        printf("\n Element %d : %d",i+1,i_tab[i]);
    }*/

    //--------------------------------------------
    // TABLEAU EX 5 //
    /*int i=0;
    int i_tab1[10]={5,3,2,1,10,11,3,5,4,2},i_tab2[10]={0};

    i_tab2[0]=i_tab1[0];

    for(i=1;i<10;i++)
    {
        i_tab2[i]=i_tab1[i]+i_tab2[i-1];
    }

    for(i=0;i<10;i++)
    {
        printf("\n Element %d : %d",i+1,i_tab2[i]);
    }*/

    //-----------------------------------------------
    // TABLEAU EX6 //
    /*int i=0;
    int i_tab1[10]={10,20,30,40,50,60,70,80,90,100};
    int i_temp=0;

    for(i=0;i<5;i++)
    {
        i_temp=i_tab1[i];
        i_tab1[i]=i_tab1[9-i];
        i_tab1[9-i]=i_temp;
    }

    for(i=0;i<10;i++)
    {
        printf("\n Element %d : %d",i+1,i_tab1[i]);
    }
    */
    char s_mot[6]={'a','n','a','n','a','s'};
    char s_rep[6]={'-','-','-','-','-','-'};
    int i=0,i_essai=7,i_cpt=0;
    char c_choix=0;
    int i_gagne=0;  // en cas de victoire
    int i_lettre=0; //en cas de lettre correcte

    do
    {
        printf("\nEssai %d \n",i_essai);
        for(i=0;i<6;i++)
        {
            printf("%c",s_rep[i]);
        }
        printf("\nVeuillez rentrer une lettre : ");
        fflush(stdin);
        scanf("%c",&c_choix);

        i_lettre=0;
        for(i=0;i<6;i++)
        {
            if(c_choix==s_mot[i]&&c_choix!=s_rep[i])
            {
                i_lettre=1;
                i_cpt++;
                s_rep[i]=s_mot[i];
            }
        }

        if(i_cpt==6)
        {
            i_gagne=1;
        }

        if(i_lettre==0)
            i_essai--;

    }while(i_gagne==0&&i_essai>0);

    if(i_gagne==1)
    {
        printf("\n Vous avez gagne\n");
    }
    else
    {
        printf("\n Vous avez perdu\n");
    }
    printf("Le mot etait ");
    for(i=0;i<6;i++)
    {
        printf("%c",s_mot[i]);
    }
    return 0;
}
