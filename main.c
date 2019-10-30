#include <stdio.h>
#include <stdlib.h>
/* file handling simple example*/

//int main()
//{
//    FILE *fp;
//    char name[20];
//    int i;
//    fp = fopen("f.txt", "w");// file will be open in writing mode
//
//    printf("insert your name");
//    gets(name);
//
//
//    for(i=0; i<strlen(name); i++){
//        fputc(name[i], fp);
//    }
//
//    fclose(fp);// this will close the function
//    return 0;
//}
//
//
//
///* file handling: Writing*/
//
//int main()
//{
//    FILE *fp;
//    int i;
//    char name[20];
//    fp =fopen("f.txt", "w");// it will open the file and there will be copy of file i.e txt file in ROM
//
//    printf("enter your name");
//    gets(name);
//
//    for(i=0; i<strlen(name); i++){
//        fputc(name[i], fp);// this will write the data from the user input to the file
//    }
//
//    fclose(fp);
//
//    return 0;
//
//
//}
//
//
///* file reading*/
//
//int main()
//{
//    FILE *fp;
//    char ch;
//
//    fp=fopen("f.txt","r");
//    if(fp==NULL){
//        printf("file doesnot exist");
//        exit(1);
//    }
//    ch = fgetc(fp);// fgetc will read the first character that is pointed by fp
//
//    while(!feof(fp)){// until the file doesnt end
//        printf("%c", ch);
//        ch=fgetc(fp);// here getc will auto matically read another character
//    }
//    fclose(fp);
//
//    return 0;
//}
//
//
///* writing in file handling process using string i.e fputs*/
//
//int main()
//{
//    FILE *fp;
//    char name[100];
//    fp= fopen("f.txt", "w");
//
//    printf("enter what you want to write");
//    gets(name);
//
//    fputs(name, fp);
//
//    fclose(fp);
//}
//
//* file reading method*/
//
//struct student{
//char name[20];
//int roll_number;
//int rank;
//
//};
//
//int main()
//{
//    struct student info;
//    int a;
//    FILE *fp;
//    fp=fopen("f.txt", "rb");
//    a=fread(&info, sizeof(info),1 , fp);// it will always return 1 if there is data in the first line
//    while(a>0){
//        printf("%s %d %d", info.name, info.roll_number, info.rank);
//    }
//    fclose(fp);
//
//}
//
///* file handling using fprintf*/
//
//int main()
//{
//    FILE *fp;// file pointer
//    int a;
//    fp = fopen("print.txt", "w");// print.txt file is created  and w mode will write mood
//
//    printf("take any number you want to save in file");
//    scanf("%d", &a);
//
//    fprintf(fp, "the number you saved is %d", a);// the second part is pointed by the file pointer
//
//    fclose(fp);
//}
//
///* file writing using structure and fwrite fuunction*/
//
//struct employee{
//char name[20];
//int id;
//int salary;
//}info[5];
//
//int main()
//{
//    int i;
//    FILE *fp;
//    fp = fopen("info.txt", "w");
//    if(fp==NULL){
//        printf("file doesnt exist");
//        exit(1);
//
//    }
//    for(i=0; i<5; i++){
//        printf("\nname");
//        scanf("%s", &info[i].name[0]);
//
//        printf("\nid:");
//        scanf("%d", &info[i].id);
//
//        printf("\nsalary:");
//        scanf("%d", &info[i].salary);
//
//
//    }
//
//    for(i=0; i<5; i++){
//        fwrite(&info[i], sizeof(info[i]), 1, fp);
//
//    }
//
//}*/
///* file handling using fread in c*/
//
//struct employee{
//char name[20];
//int id;
//int salary;
//}info[5];
//
//int main()
//{
//    int i;
//    FILE *fp;
//    fp = fopen("info.txt", "r");
//    if(fp==NULL){
//        printf("file doesnt exist");
//        exit(1);
//
//    }
//
//     for(i=0; i<5; i++){
//        fread(&info[i], sizeof(info[i]), 1, fp);
//
//    }
//
//    for(i=0; i<5; i++){
//        printf("\nname: %s id: %d salary: %d ", info[i].name, info[i].id, info[i].salary);
//    }
//
//
//}
//*/
//
//int main()
//{
//    int a = 7;
//    printf("the number is %d", a);
//
//}

/* file handling using structure*/
//struct detail{
//    int roll;
//    char name[20];
//    int position;
//}info[3];
//void fwritee()
//{
//    int i;
//    FILE *fp;
//
//    fp = fopen("info.txt", "wb");
//
//    struct detail info[3];
//    printf("----enter the deatils-----\n");
//    for(i=0; i<3; i++){
//        printf("enter roll number\n");
//        scanf("%d", &info[i].roll);
//
//        printf("enter name\n");
//        scanf("%s", &info[i].name);
//
//        printf("enter position\n");
//        scanf("%d", &info[i].position);
//
//        printf("*****************\n");
//    }
//
//    for(i=0; i<3; i++){
//        fwrite(&info[i], sizeof(info[i]), 1, fp);
//    }
//
//    fclose(fp);
//}
//
//void freadd()
//{
//    int i;
//    FILE *fp;
//
//    fp = fopen("info.txt", "rb");
//
//    printf("----file transfer-----\n");
//
//    for(i=0; i<3; i++){
//        fread(&info[i], sizeof(info[i]), 1, fp);
//    }
//    for(i=0; i<3; i++){
//        printf("ROLL: %d\n", info[i].roll);
//
//        printf("Name: %s\n", info[i].name);
//
//        printf("Position: %d\n", info[i].position);
//
//        printf("==========================\n");
//    }
//
//
//    fclose(fp);
//}
//int main()
//{
//   int choice;
//
//   while(1){
//    printf("choose 1 for info collection\n");
//    printf("enter 2 for info read\n");
//
//    scanf("%d", &choice);
//
//    switch(choice){
//
//    case 1:
//        fwritee();
//        break;
//
//    case 2:
//        freadd();
//        break;
//    }
//   }
//}


