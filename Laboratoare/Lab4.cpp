#include <iostream>
#include <ctype.h>
#include <string>
#include <conio.h>
using namespace std;
typedef char string[20];
int m,n,i,j,k,t;
char x,y;
char* a[10][10],b[10][10],c[10][10],p,l;
int main() {
    cout<<"Numar de varfuri" ;
    cin>>n;
    cout<<"Numar de arce" ;
    cin>>m;
for(i = 1;i <= n;i++)
    for(j = 1;j <= n;j++) {
        strcpy(a[i][j],"0");
        strcpy(b[i][j],"0"); }
for(i = 1;i <= m;i++) {
    cout<<"Extremit˘at¸i arc "<<i<<" ";
    cin>>x>>y;
    x=toupper(x);
    y=toupper(y);
if(x!=y) { 
    char *z;
    switch (x) {
        case 'A': z = 'A';break;
        case 'B': z = 'B';break;
        case 'C': z = 'C';break;
        case 'D': z = 'D';break;
        case 'E': z = 'E';break;
        case 'F': z = 'F';break;
        case 'G': z = 'G';break;
        case 'H': z = 'H';break;
        case 'I': z = 'I';break;
        case 'J': z = 'J';break;
}
strcpy(b[(int)x-64][(int)y-64],z);
switch (y) {
    case 'A':z = 'A';break;
    case 'B':z = 'B';break;
    case 'C':z = 'C';break;
    case 'D':z = 'D';break;
    case 'E':z = 'E';break;
    case 'F':z = 'F';break;
    case 'G':z = 'G';break;
    case 'H':z = 'H';break;
    case 'I':z = 'I';break;
    case 'J':z = 'J';break;
}
strcpy(a[(int)x - 64][(int)y - 64],z);
strcat(b[(int)x - 64][(int)y - 64],z);
}
}
for(t = 2;t < = n - 1; t++) {
    for(i = 1; i < = n;i++)
        for(j = 1;j <= n;j++) {
            strcpy(c[i][j],"0");
                for(k = 1;k <= n;k++) {
int i1,j1,e = 0;
    for (i1 = 0; i1 < strlen(b[i][k]);i1++)
        for(j1 = 0;j1< strlen(a[k][j]);j1++)
    if(b[i][k][i1]==a[k][j][j1]) e=1;
    if((strcmp(b[i][k],"0")==0) || (strcmp(a[k][j],"0")==0)||(e==1))
strcpy(l,"0");
else
{
    strcpy(l,"");
    strcpy(l,b[i][k]);
    strcat(l,a[k][j]);
}
if(strcmp(l,"0")!=0){
    if (strcmp(c[i][j],"0")==0) strcpy(c[i][j],"");
        if (strcmp(c[i][j],"")!=0) strcat(c[i][j],",");
            strcat(c[i][j],l);
}
} }
for(i=1;i<=n;i++)
    for(j = 1; j <= n; j++)
        strcpy(b[i][j],c[i][j]);
}
for(i=1;i<=n;i++)
    for(j = 1;j <= n; j++) {
    if(strcmp(c[i][j],"0")!=0){cout<<c[i][j]<<endl; }
getch();
}
return 0;
}