#include<stdio.h>
int main()
{
//printf("hello world!!");
int machineCost,maintenanceCost,increaseInMaintenanceCost,resaleValue,decreaseInResaleValue;
printf("Machine Cost:");
scanf("%d",&machineCost);
printf("Maintenance Cost:");
scanf("%d",&maintenanceCost);
printf("Increase in Maintenance Cost:");
scanf("%d",&increaseInMaintenanceCost);
printf("Resale Value:");
scanf("%d",&resaleValue);
printf("Decrease In Resale Value:");
scanf("%d",&decreaseInResaleValue);
int year=1,temp=0,cumulativeCost=maintenanceCost,total=0,average=0,t2=0;
temp=machineCost-resaleValue;
total=temp+cumulativeCost;
average=total;
printf("\nYEAR\tMACHINE COST(C)\tRESALE VALUE(S)\tC-S\tMAINTENANCE COST\tCUMULATIVE MAINTENANCE\tTOTAL LOSS\tAVERAGE LOSS\n");
printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",year,machineCost,resaleValue,temp,maintenanceCost,cumulativeCost,total,average);
do{
resaleValue=resaleValue-decreaseInResaleValue;
temp=machineCost-resaleValue;
maintenanceCost=maintenanceCost+increaseInMaintenanceCost;
cumulativeCost=cumulativeCost+maintenanceCost;
total=temp+cumulativeCost;
year=year+1;
t2=total/year;
if (average>=t2)
{
	/* code */
	average=t2;
}
printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",year,machineCost,resaleValue,temp,maintenanceCost,cumulativeCost,total,average);
}while(average>=t2);
printf("\nthe year to sell the machine in is:%d",year);
}
