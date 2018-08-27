#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    int t;
    
    cin>>t;
    
    int n,m,s,i=0,k=0,vec[100],numero;
    char cadena[100],*n1;
    
    for (i=0;i<t;i++)
    {fflush(stdin);
    cin.getline(cadena,60);
    fflush(stdin);
    
    n1=strtok(cadena," ");
    n=atoi(n1);
    
    
    
    n1=strtok(NULL," ");
    m=atoi(n1);

    
    
    n1=strtok(NULL," ");
    s=atoi(n1);
    
    numero=s-1;
    
    for (k=1;k<=m;k++)
    { 
        if (numero == n)
        {
        numero=0;
        }
        numero=numero+1;
        
        
    }
    vec[i]=numero;
    
    
    
    if (s<=n)
    {
         
         }
         else
         {
             cout<<"\nERROR!!!";
             }
             }
             cout<<"\n--------------\n";
             for (k=0;k<t;k++)
             {
                 cout<<vec[k]<<"\n";
                 }   
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
