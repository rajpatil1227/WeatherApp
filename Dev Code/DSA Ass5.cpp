#include<stdio.h>
#include<stdbool.h> 

#define INF 9999999

#define V 20

void create_graph(int a[20][20],int n);
void display_graph(int a[20][20],int n);

int main() {
	
	int G[V][V]={},n,cost=0;
  int no_edge; 

	printf("ENTER THE NUMBER VERTICES ");
	scanf("%d",&n);
	
	//Create a grpah
	create_graph(G,n);
	display_graph(G,n);
  // create a array to track selected vertex
  // selected will become true otherwise false
  int selected[V]={};

  // set number of edge to 0
  no_edge = 0;

  selected[0] = true;

  int x;  //  row number
  int y;  //  col number

  // print for edge and weight
  printf("Edge : Weight\n");

  while (no_edge < n - 1) {

    int i,j,min = INF;
    x = 0;
    y = 0;

    for (i = 0; i < n; i++) {
      if (selected[i]) {
        for (j = 0; j < n; j++) {
          if (!selected[j] && G[i][j]) {  // not in selected and there is an edge
            if (min > G[i][j]) {
              min = G[i][j];
              x = i;
              y = j;
            }
          }
        }
      }
    }
    printf("%d - %d : %d\n", x, y, G[x][y]);
    selected[y] = true;
    cost+=G[x][y];
    no_edge++;
  }
  printf("MST Cost is : %d",cost);

  return 0;
}

void create_graph(int a[20][20],int n)
{
	int flag,v1,v2,choice,cost;
	printf("Enter 1 if undirected graph otherwise 0 :");
	scanf("%d",&flag);
	
	do
	{
		printf("Enter the edge :");
		scanf("%d %d",&v1,&v2);
		printf("Cost :");
		scanf("%d",&cost);
		a[v1][v2]=cost;
		if(flag==1)
		{
			a[v2][v1]=cost;
		}
		printf("Enter do you want to continue :");
		scanf("%d",&choice);
	}while(choice==1);
}


void display_graph(int a[20][20],int n)
{
	int i,j;
	printf("\nTHE ADJACENCY MATRIX IS\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}
