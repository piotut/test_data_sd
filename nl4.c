//C hello world example
#include <stdio.h>
 
int main()
{
  int a = 5;
  int b = 6;
  int c = 7;
  int d = 8;
  int e = 9;
  int f = 10;

  int result;

  if(a>4){
		if(b>2){
			if(c>6){
				result = a + b;
				result = c + a;
				if(d>7){
					if(e>8){
						if(f>10){
							result = a + b + c + d + e + f;
							printf("%d", result);
						}
					}
				}
			}
		}
	}

  return 0;
}
