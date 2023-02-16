#include<stdio.h>
#define MAX 20
int stack[MAX], top = -1, front = -1, rear = -1, queue[MAX];
void push(int n){
    if(top == MAX-1){
        printf("Stack overflow \n");
    }
    else{
        stack[++top] = n;
    }
}
int pop(){
    int k;
    if(top == -1){
    	
        printf("Stack is empty \n");
    }
    else{
        k = stack[top];
        top--;
    }
    return k;
}
int isempty(){
    if(top == -1)
        return 1;
    return 0;
}
void enque(int n){
    if(rear == MAX-1)
        printf("Queue is full \n");
    else{
        if(rear == -1)
        {
            queue[++rear] = n;
            front++;
        }
        else
            queue[++rear] = n;
    }
}
int deque(){
    int k;
    if(front == rear){
        k = queue[front++];
        front = rear = -1;
    }
    else{
        k = queue[front++];
    }
    return k;
}
int isqempty(){
    if(front == -1)
        return 1;
    else
        return 0;
}
void Create_Graph(int a[20][20], int n){
    int v1, v2, f, c;
    printf("Enter 1 for unidirected graph else enter 0 : ");
    scanf("%d", &f);
    do
    {
        printf("Enter the Edges : ");
        scanf("%d %d", &v1, &v2);
        a[v1][v2] = 1; 
        if(f == 1)
        {
            a[v2][v1] = 1;
        }
        printf("Do you want to continue (0/1): ");
        scanf("%d",&c);
    } while (c == 1);   
}
void Display(int a[20][20], int n){
    printf("Adjencecy Matrix of a Graph : \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void DFS(int a[20][20], int n, int s){
    int Visit[MAX] = {}, v1, v2;
    push(s);
    printf("DFS : ");
    while(isempty()==0){
        v1 = pop();
        if(Visit[v1] != 1){
            printf("%d ",v1);
            Visit[v1] = 1;
        }
        for (v2 = 0; v2 < n; v2++){
            if((a[v1][v2] != 0) && (Visit[v2] == 0)){
                push(v2);
            }
        }
    }
}
void BFS(int a[20][20], int n, int s){
    int Visit[MAX] = {}, v1, v2;
    enque(s);
    Visit[s] = 1;
    printf("BFS : ");
    while (!isqempty())
    {
        v1 = deque();
        printf("%d ",v1);
        for (int v2 = 0; v2 < n; v2++)
        {
            if((a[v1][v2] == 1) && (Visit[v2] == 0)){
                enque(v2);
                Visit[v2] = 1;
            }
        }
    }
}
int main(){
    int n, s;
    printf("Enter the No. of vertices : ");
    scanf("%d",&n);
    int a[20][20] = {0};
    Create_Graph(a, n);
    Display(a, n);
    printf("Enter the source vertix \n");
    scanf("%d",&s);
    DFS(a, n, s);
    printf("\n");
    BFS(a, n, s);
    return 0;
}
