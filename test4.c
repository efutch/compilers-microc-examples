int A[10];


int ordenar(int N) {
 int i,j,temp;
 i=1;
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

int imprimir(int N) {
  int i;
  i=1;
  while (i<N+1) {
     writeint(A[i]);
     puts("\n");
     i=i+1;     
  }
}

int leer(int N) {
  int i;
  i=1;
  while (i<N+1) {
     writeint(i);
     puts(":");
     A[i]=scanfint();
     i=i+1;     
  }
}

int main(int a) 
{
	leer(5);
	ordenar(5);
	imprimir(5);

}
