#include <stdio.h>
#include <stdlib.h>

struct Node {
    char *name;
    int sym[30];
    struct Node *next;
}rp[100];

struct Node * Record;
struct Node * newRecord;

void printRecord(int no[30])
{
    int i=0;
    struct Node * iterator = Record;
    while(iterator != NULL)
    {
        printf("\nName of Disease: %s\n", iterator->name);
        for(int j=0;j<no[i];j++){
        printf("%d,", iterator->sym[j]);
        }
        iterator=iterator->next;
        i++;
    }
}

void read_Disease();

void writeToFile(int no[30])
{
  int i=0;
   
    FILE * fptr;
    fptr = fopen("DiseaseName.txt", "a");

    if(fptr==NULL)
    {
        printf("Error\n");
    }

    else
    {
        while(Record!= NULL)
        {
          fprintf(fptr,"%s ",Record->name);
          for(int j=0;j<no[i];j++){
            fprintf(fptr," %d,", Record->sym[j]);
          }
          fprintf(fptr,"\n");
            Record= Record->next;
            i++;
        }
    }
   

    fclose(fptr);
   
    }

int main()
{
    // int count, i,no[30];
    // printf("How many input do you want to make? ");
    // scanf("%d", &count);

    // for(i=0; i<count; i++)
    // {
    //     if(i==0)
    //     {
    //         Record = malloc(sizeof(struct Node));
    //         newRecord = Record;
    //     }
    //     else
    //     {
    //         newRecord->next = malloc(sizeof(struct Node));
    //         newRecord = newRecord->next;
    //     }
    //     newRecord->name = malloc(50*sizeof(char));
    //     printf("\nName of a disease: ");
        
    //     scanf("%s", newRecord->name);
    //     printf("How many Symptoms do you want to insert -> ");
    //     scanf("%d",&no[i]);
    //     printf("symptoms according to Numbers: ");
    //     for(int j=0;j<no[i];j++){
    //     scanf("%d,", &newRecord->sym[j]);
    //     }
    // }
    // printf("\n\n");
    // newRecord->next = NULL;
    // printRecord(&no[0]);
    // writeToFile(&no[0]); 

    read_Disease();
}

void read_Disease()
{
    FILE *read = fopen("DiseaseName.txt", "r+");
    int count = 0;
    char c = getc(read);
    while (c!= EOF)
    {
        if (c == '\n')
            count++;
        c = getc(read);
    }
    rewind(read);

    int find = 0, symp[30],no=0,j;
    printf("How many symptoms do you want to insert -> ");
    scanf("%d",&no);
    printf("%d",no);
    printf("Enter the Symptoms No. -> ");
    for(int i=0;i<no;i++){
    scanf("%d,", &symp[i]);
    }
    printf("\n");
    // for(int i=0;i<no;i++){
    // printf("%d",symp[i]);
    // }

    int i = 0;
    for (; i < count; i++)
    {
       fscanf(read, "%s", rp[i].name);
        if (rp[i].sym == symp[0])
        {
            find = i;
            
            break;
        }
        printf("\n%d\n",rp[i].sym);
    }
    if (j == count)
        printf("%d\n",*rp[i].name);
    else
        printf("Name of the disease: %s\n", rp[i].name);
    
    fclose(read);
}



    // if(no==1){
    // struct Node * iterator = Record;
    // while(iterator != NULL)
    // {
        
    //     fscanf(read,"%s ", iterator->name);
    //     for(j=0;j<no;j++){
    //     fscanf(read,"%d,",&iterator->sym[j]);
    //     }
    //     for(j=0;j<no;j++){
    //     if (iterator->sym[j] == symp[j])
    //     {
    //         break;
    //     }
    //     }
    //     fscanf(read,"\n");
    //     iterator=iterator->next;

    // }

