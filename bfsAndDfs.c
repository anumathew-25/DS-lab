#include<stdio.h>
int q[20],top=-1,front=-1,rear=-1,a[20][20],visited[20],stack[20];
int delete();
void add(int item);
void bfs(int s,int n);
void dfs(int s,int n);
void push(int item);
int pop();

void main(){
int n,i,s,ch,j;
char c,dummy;
printf("Enter the number of vertices: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		printf("Enter 1 if %d has a node with %d else 0\n",i,j);
		scanf("%d",&a[i][j]);
	}		
}
printf("The adjacency matrix is\n");
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		printf(" %d",a[i][j]);
	}
	printf("\n");
}

do{
	for(i=1;i<=n;i++)
	visited[i]=0;
	printf("\n1.B.F.S\n2.D.F.S\nEnter your option: ");
	scanf("%d",&ch);
	printf("Enter the source vertex: ");
	scanf("%d",&s);

switch(ch){
	case 1:
		bfs(s,n);
		break;
	case 2:
		dfs(s,n);
		break;
	}
	printf("\nEnter Y to continue or N to exit: ");
	scanf("%c",&dummy);
	scanf("%c",&c);
	}
	while((c=='y')||(c=='Y'));
}

void bfs(int s,int n){
int p,i;
add(s);
visited[s]=1;
p=delete();
if(p!=0)
	printf(" %d",p);
while(p!=0){
	for(i=1;i<=n;i++)
		if((a[p][i]!=0)&&(visited[i]==0)){
		add(i);
		visited[i]=1;
	}
	p=delete();
if(p!=0)
	printf(" %d ",p);
}
for(i=1;i<=n;i++)
	if(visited[i]==0)
	bfs(i,n);
}


void add(int item){
	if(rear==19)
		printf("Queue is full");
	else{
		if(rear==-1){
		q[++rear]=item;
		front++;
	}
	else
	q[++rear]=item;
	}	
}
int delete(){
int k;
if((front>rear)||(front==-1))
	return(0);
else{

	k=q[front++];
	return(k);
}
}


void dfs(int s,int n){
int i,k;
push(s);
visited[s]=1;
k=pop();
if(k!=0)
printf(" %d ",k);
while(k!=0){
	for(i=1;i<=n;i++)
	if((a[k][i]!=0)&&(visited[i]==0)){
		push(i);
		visited[i]=1;
	}
	k=pop();
if(k!=0)
printf(" %d ",k);
}
for(i=1;i<=n;i++)
	if(visited[i]==0)
		dfs(i,n);
}
void push(int item){
	if(top==19)
	printf("Stack is full");
	else
	stack[++top]=item;
}
int pop(){
int k;
if(top==-1)
	return(0);
else{
	k=stack[top--];
	return(k);
}
}
