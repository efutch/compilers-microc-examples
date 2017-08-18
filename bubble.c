/*
Bubblesort
*/

int A[21];

void ordenar(int N) 
{
 int i=1,j,temp;
 while (i<N) {
  j=i+1;
  while (j<N+1) {
       if (A[i]>A[j])
       {
	temp=A[i];
	A[i]=A[j];
	A[j]=temp;
       }
    j=j+1;
  }
  i=i+1;
 }
}

void imprimir(int N) 
{
  int i=1;
  while (i<N+1) {
     writeint(A[i]);
     puts("\n");
     i=i+1;     
  }
}

void leer(int N) 
{
  int i=1;
  while (i<N+1) {
     puts("#");
     writeint(i);
     puts("=");
     A[i]=readint();
     i=i+1;     
  }
}

void lectura()
{
     puts("Ingrese n (MAX=20):");
}

void imp_enorden()
{
     puts("EN ORDEN: ");
}


int main() 
{

  int n, done=0;
  while (!done) 
  {
    lectura();
    n=readint();
    if ((n>0) && (n<21))
    {
      leer(n);
      ordenar(n);
      imp_enorden();
      imprimir(n);
      done=1; 
    }
    else
    {
     puts("ERROR");

    }   
  } 
}
