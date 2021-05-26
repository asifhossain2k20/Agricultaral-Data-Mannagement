#include<stdio.h>
int main()
{
    printf("\t\t\tWelcome To\n \t\tAGRICULTUTAL DATA MANAGEMENT");
    int crop;
printf("\n\n\n\tPress ENTER key to See Our Data Management....");
getchar();
system("cls");
    printf("\n\n\nOur Available Crops Name : \n\n1.Rice\n\n2.Jute\n\n3.Potato\n\n");

    printf("Enter Any crop Srial Number : ");
    scanf("%d",&crop);
   printf("\n\n");
   system("cls");
   //Rice
    if(crop==1)
    {
        char r[100];


              FILE *file;
    file = fopen("rice.txt","r");
    if(file==NULL)
    {
        printf("File Does not Exist ");
    }
    else
        {
            printf("\t\tRice\n");

            while(!feof(file))
        {
       fgets(r,100,file);
       printf("\n%s\n",r);
        }
        fclose(file);
         printf("\n\n");
        getchar();
        }
        printf("\nEnter To Learn About Season.....");
        getchar();
system("cls");
         printf("\n\nThere are 3 Season for Rice :\n\n1.Boro\n\n2.Aman\n\n3.Aush");
        printf("\n\nEnter Any croup Srial Number : ");
        scanf("%d",&crop);
        printf("\n\n");
        system("cls");
        //Boro
        if(crop==1)
         {
             char b[1000];
              FILE *file;
    file = fopen("boro.txt","r");
    if(file==NULL)
    {
        printf("File Does not Exist ");
    }
    else
        {
            printf("\tAbout Boro \n");

            while(!feof(file))
       {
       fgets(b,100,file);
       printf("\n%s\n",b);
       }
         fclose(file);
        }
        printf("\n\n\n");
        getchar();
    }
    //amon

     if(crop==2)
         {
             char am[1000];
              FILE *file;
    file = fopen("amon.txt","r");
    if(file==NULL)
    {
        printf("File Does not Exist ");
    }
    else
        {
            printf("\t About Amon \n");
                while(!feof(file))
       {
       fgets(am,100,file);
       printf("\n%s\n",am);
       }
         fclose(file);
        }
           printf("\n\n");
        getchar();
    }
    //Aush
     if(crop==3)
         {
             char au[100];
              FILE *file;
    file = fopen("aush.txt","r");
    if(file==NULL)
    {
        printf("File Does not Exist ");
    }
    else
        {
            printf("\tAbout Aush");
        while(!feof(file))
       {
       fgets(au,100,file);
       printf("\n%s\n",au);
       }
        fclose(file);
        }
          printf("\n\n");
        getchar();
       }
       // cultivation
       printf("Press Enter To Learn How To Cultivate Rice ......\n");
       getchar();
        system("cls");
       {
           char cul[1000];
     FILE *file;
    file=fopen("cultivation.txt","r");
    if(file==NULL)
    {
        printf("The File does Not Open ");
    }
    else
    {
       printf("\nThere are some Steps to Cultivate Rice.Here it is :\n\n");
        while(!feof(file))
       {
       fgets(cul,100,file);
       printf("\n%s\n",cul);
       }
       fclose(file);
    }

   printf("\nPress Enter to Learn Next step.......");
   getchar();

   {
       char cul2[1000];
    FILE *file;
    file=fopen("cultivation2.txt","r");
    if(file==NULL)
    {
        printf("The File does Not Open ");
    }
    else
    {
       printf("\t Step 2\n");
          while(!feof(file))
       {
       fgets(cul2,109,file);
       printf("\n%s\n",cul2);
       }
       fclose(file);
    }
    printf("\nPress ENTER for Learn next step....");
    getchar();
    {
        char cul3[1000];
    FILE *file;
    file=fopen("rice3.txt","r");
    if(file==NULL)
    {
        printf("The File does Not Open ");
    }
    else
    {
       printf("\tStep 3\n");
        while(!feof(file))
       {
       fgets(cul3,109,file);
       printf("\n%s\n",cul3);
       }
       fclose(file);
    }
     printf("\nPress ENTER for Learn next step....");
    getchar();
    {
        char cul4[1000];
    FILE *file;
    file=fopen("cultivatin4.txt","r");
    if(file==NULL)
    {
        printf("The File does Not Open ");
    }
    else
    {
       printf("\t Step 4\n");
        while(!feof(file))
       {
       fgets(cul4,109,file);
       printf("\n%s\n",cul4);
       }
       fclose(file);
    }
    printf("\nPress Enter For learn next Step ......");
    getchar();
    {
        char cul5[1000];
    FILE *file;
    file=fopen("cultivation5.txt","r");
    if(file==NULL)
    {
        printf("The File does Not Open ");
    }
    else
    {
       printf("\t Step 5\n");
        while(!feof(file))
       {
       fgets(cul5,109,file);
       printf("\n%s\n",cul5);
       }
       fclose(file);
    }
       printf("\nPress Enter For learn next Step ......");
    getchar();
    {
        char cul6[1000];
    FILE *file;
    file=fopen("cultivation6.txt","r");
    if(file==NULL)
    {
        printf("The File does Not Open ");
    }
    else
    {
       printf("\tStep 6\n");

 while(!feof(file))
       {
       fgets(cul6,109,file);
       printf("\n%s\n",cul6);
       }

       fclose(file);
    }
           printf("\nPress Enter For learn next Step ......");
    getchar();
{
    char cul7[1000];
    FILE *file;
    file=fopen("cultivation7.txt","r");
    if(file==NULL)
    {
        printf("The File does Not Open ");
    }
    else
    {
       printf("\n\tStep 7\n");

 while(!feof(file))
       {
       fgets(cul7,109,file);
       printf("\n%s\n",cul7);
       }

       fclose(file);
    }

          printf("\nPress Enter For next Step ......");
    getchar();
     system("cls");
    {
        printf("\n\n\tThank You For Use Our Data Management...");
    }
  }

  }

 }

}

}

  }
}
}


    //jute
    else if(crop==2)
    {
        char j[1000];
          FILE *file;
    file = fopen("jute.txt","r");
    if(file==NULL)
    {
        printf("File Does not Exist ");
    }
    else
        {
            printf("\tAbout  jute\n");
            while(!feof(file))
       {
       fgets(j,109,file);
       printf("\n%s\n",j);
       }
        fclose(file);
        }
               printf("\n\n");
    getchar();
    {
           printf("\nPress Enter For learn More ......");
    getchar();
     system("cls");
    {
        char j2[1000];
    FILE *file;
    file=fopen("jute2.txt","r");
    if(file==NULL)
    {
        printf("The File does Not Open ");
    }
    else
    {
       printf("\tMore Details :\n");

 while(!feof(file))
       {
       fgets(j2,109,file);
       printf("\n%s",j2);

       }

       fclose(file);
    }
    printf("Press Enter go for Next .....");
    getchar();
     system("cls");
    {
        printf("\tThank You For Using Our Data management. ");
    }
}

    }
    }
    //Potato

    else if(crop==3)
    {
        char p[1000];
    FILE *file;
    file=fopen("potato.txt","r");
    if(file==NULL)
    {
        printf("The File does Not Open ");
    }
    else
    {
       printf("\tPOTATO\n");
        while(!feof(file))
       {
       fgets(p,109,file);
       printf("\n%s\n",p);
       }

       fclose(file);
    }
 getchar();
    {
           printf("\nPress Enter For learn Cultivation ......");
    getchar();
     system("cls");

    {
    char p2[1000];
    FILE *file;
    file=fopen("potato2.txt","r");
    if(file==NULL)
    {
        printf("The File does Not Open ");
    }
    else
    {
       printf("\tPotato Cultivation\n");
        while(!feof(file))
       {
       fgets(p2,109,file);
       printf("\n%s",p2);
       }
       fclose(file);
           }
            getchar();
    {
           printf("\nPress Enter For learn Production......");
    getchar();
     system("cls");
{
    char p3[1000];
        FILE *file;
    file=fopen("potato3.txt","r");
    if(file==NULL)
    {
        printf("The File does Not Open ");
    }
    else
    {
       printf("\tPRODUCTION\n");
       while(!feof(file))
       {
       fgets(p3,109,file);
       printf("\n%s",p3);
       }

       fclose(file);
    }
             printf("\nPress Enter For next Step ......");
    getchar();
     system("cls");
    {
        printf("\n\n\tThank You For Use Our Data Management...");
    }


}

    }
    }
    }
    }
    //Not Found
    else
    {
        printf("Not Found");
    }


 getch();


}
