/*
Read elmer mesh file convert material types to desired nummbers

*/


/*
Read list of ids
set id for new material
get number of mesh pints
Read mesh file read into structure

for each mesh test against list of ids
if yes set new material id
if no don't change

write output


*/

#include <stdio.h>

#define NUMNODES 742
#define NEWMATID 2

int nodes[NUMNODES][7];
int matel[NUMNODES];


int main(int argc, char **argv)
{

        int i,j; //general loop counter
        char *smatel="damwithhole3dv2/matelements1.txt";
        char *smeshfil="damwithhole3dv2/mesh.elements";
        char *snewmeshfil="damwithhole3dv2/newmesh.elements";
        
        int iel; // counter for material elements
	int nel; // number of material elements
	int imes; //mesh counter
	
	FILE *melfptr; /*  mat elements file pointer*/
	FILE *mesfptr; /*  mesh file pointer*/
	FILE *newmesfptr; /*  new mesh file pointer*/

	printf("Reading material elements.\n");

        iel=0;
        if((melfptr=fopen(smatel, "r"))==NULL)
		printf("The file could not be opened!\n");
	else
	{
		printf("%6s \n", "Matel");
		
		do
		{
			
			fscanf(melfptr, "%d", &(matel[iel]));
			printf("%6d \n", matel[iel]);
			iel++;
			
		}
		while(!feof(melfptr));

		fclose(melfptr);
	}

        printf("Read the mesh file \n");
        imes=0;
        if((mesfptr=fopen(smeshfil, "r"))==NULL)
		printf("The file could not be opened!\n");
	else
	{
		printf("%6s \n", "Matel");
		
		do
		{
			
			for(i=0; i<7; i++)
			{
			fscanf(mesfptr, "%d", &nodes[imes][i]);
			
			printf("%4d ", nodes[imes][i]);
			}
			printf("\n");
			imes++;
			
		}
		while(!feof(mesfptr));

		fclose(mesfptr);
	}        
        
        imes--;
        printf("%d mesh elements read\n", imes);
        
        
        //Modify the elemenst
        for(i=0; i<iel; i++)
        	nodes[matel[i]][1]=2;
        
        
        
        

	printf("Warning backup your old mesh file");
        printf("Read the mesh file \n");
       
        if((newmesfptr=fopen(snewmeshfil, "w"))==NULL)
		printf("The file could not be opened!\n");
	else
	{
		printf("%6s \n", "Matel");
		
		for(i=0; i<imes; i++)
		{
			
			for(j=0; j<7; j++)
			{
			fprintf(newmesfptr, "%d ", nodes[i][j]);
			
			printf("%4d ", nodes[i][j]);
			}
			fprintf(newmesfptr,"\n");
			printf("\n");
			
			
		}
		

		fclose(newmesfptr);
	} 



	return 0;
}
