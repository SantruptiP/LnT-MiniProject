#include<stdio.h>
#include<math.h>
struct Truck
{
  int truckID;
  char truckModel[100];
  int truckRegNo;
  char carryingCargo[100];
  char drivenBy[100];
  int arrivalTime;
  void (*Register)(int *,char *,int *,char *,char*);
  void (*viewData)(int *,char *,int *,char *,char*);
  void (*addTrkRec)(int *,char *,int *,char *,char*,int *);
}
void addTrkRec(int *truckID,char *truckModel,int *truckRegNo,char *carryingCargo,char *drivenBy,int *arrivalTime)
{
  printf("Insert truckID\n");
  scanf("%d",&truckID);
  printf("Insert truck model\n");
  scanf("%s",truckModel);
  printf("Insert truck reg. No.\n");
  scanf("%d",&truckRegNo);
  printf("Insert Name of cargo\n");
  scanf("%s",carryingCargo);
  printf("Insert Driver's Name\n");
  scanf("%s",drivenBy);
  printf("Insert Arrival Time\n");
  scanf("%d",&arrivalTime);
  return 1;
}

void viewData(int *truckID,char *truckModel,int *truckRegNo,char *carryingCargo,char *drivenBy,int *arrivalTime)
{
  printf("Truck ID\t Truck Model\t Truck Reg.No.\t Cargo Name\t Driver name\t Arrival Time\n");
  printf("%d\t%s\t%d\t%s\t%s\t%s\t%d\n",truckID,truckModel,truckRegNo,carryingCargo,drivenBy,arrivalTime);
  return 0;
}

void SearchData(int *truckID,char *truckModel,int *truckRegNo,char *carryingCargo,char *drivenBy,int *arrivalTime)
{
  printf("Enter the truckID needed to be searched:\n");
  scanf("%d",&Tid);
  for(i=1;i<=count;i++)
  {
    if(Tid==T[i].truckID)
    T[i].viewData(T[i].truckID,T[i].truckModel,T[i].truckRegNo,T[i].carryingCargo,T[i].drivenBy,T[i].arrivalTime);
    else
    printf("Truckid not found\n");
  }
    return 0;
}

void main()
{
  struct Truck T[100];
  int count=0;
  int ch;
  int Tid;
  int i;
  printf("Choose one:\n 1. Add Truck Record 2. Delete Truck Record 3. Search Truck Record 4. View Truck Record\n")
  scanf("%d\n",&ch );
  FILE *fp;
  fp = fopen("myfile2.txt","r");
  if(fp==NULL)
  {
    printf("Error opening file\n");
    exit(1);
  }
  switch(ch)
  {
    case 1:
      count++;
      T[count].addTrkRec(T[count].truckID,T[count].truckModel,T[count].truckRegNo,T[count].carryingCargo,T[count].drivenBy,T[count].arrivalTime);
      //saving data in file
      fprintf(fp, "%d,%s,%d,%s,%s,%d",T[count].truckID,T[count].truckModel,T[count].truckRegNo,T[count].carryingCargo,T[count].drivenBy,T[count].arrivalTime);
      break;
    case 2:
      printf("Enter the truckID needed to be deleted:\n");
      scanf("%d",&Tid);
      for(i=1;i<=count;i++)
      {
        if(Tid==T[i].truckID)
        remove(T[i])
      }
      count--;
      break;
    case 3:
      SearchData(int *truckID,char *truckModel,int *truckRegNo,char *carryingCargo,char *drivenBy,int *arrivalTime);
      break;
    case 4:
      printf("Displaying all the truck details:\n")
      printf("Truck ID\t Truck Model\t Truck Reg.No.\t Cargo Name\t Driver name\t Arrival Time\n");
      for(i=1;i<=count;i++)
      {
        T[i].viewData(T[i].truckID,T[i].truckModel,T[i].truckRegNo,T[i].carryingCargo,T[i].drivenBy,T[i].arrivalTime);
      }
      break;
    default:
      printf("Enter the correct number\n");
      break;
  }


}
