int a, b[10];

/*char c;
int suma(int a, int b, char c)
{ 
writeint(a);writeint(b);puts(c);
return 58;
}
*/
/*
0,1,2,3,4,5,6,7, 8, 9, 10
0,1,1,2,3,5,8,13,21,34,55
*/
void imp(int n)
{  
  writeint(n-1);
  puts("+");
  writeint(n-2);
  puts("\n");
  return;
}

int fib(int n)
{
  
  if  (n<2)
    return n;
  else
  {
   imp(n); 
   return fib(n-1)+fib(n-2);
  }
}

void main( ) 
{  
  writeint(fib(scanfint()));
/*  a=suma(suma(1,1,c),2*8,"A");  */
}
