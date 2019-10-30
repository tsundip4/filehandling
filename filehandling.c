#include<stdio.h>
#include<stdlib.h>

/* information about employer*/

struct employe{
    char name[20];
    char position[20];
    float salary;
    struct employe* next;
};
struct employe* Head =NULL;

void employe_record()
{
    struct employe* temp;
    struct employe* temp1;

    temp = (struct employe*)malloc(sizeof(struct employe));
    temp->next = NULL;

    printf("*----collection for employee information----*\n");

    printf("enter name of employe\n");
    scanf("%s", &temp->name);

    printf("enter position of the employe\n");
    scanf("%s", &temp->position);

    printf("enter the salary of the employe\n");
    scanf("%f", &temp->salary);

    if(Head==NULL){
        Head = temp;
    }
    else{
        temp1 = Head;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void write()
{
    FILE *fp;
    struct employe* temp;
    fp = fopen("employe.txt","w");

    temp = Head;

    while(temp != NULL){
        fwrite(temp, sizeof(struct employe), 1, fp);
        temp = temp->next;
    }
}

int main()
{
    int choice;

    while(1){
        printf("press 1 for add emplyee info\n");
        printf("press 2 for file read\n");
        printf("enter 3 for write\n");

        scanf("%d", &choice);

        switch(choice){
        case 1:
            employe_record();
            break;

        case 2:
            read();
            break;

        case 3:
            write();
            break;
        }
    }
}
void read()
{
    FILE *fp;

    fp = fopen("employe.txt", "r");
    struct employe* temp;

    temp = Head;

    while(temp!=NULL){
        fread(temp, sizeof(struct employe), 1, fp);
        temp = temp->next;
    }

    struct employe* temp1;

    temp1 = Head;
    while(temp1!=NULL){
        printf("%s  %s  %f\n",temp1->name, temp1->position, temp1->salary);
        temp1 = temp1->next;
    }
}
