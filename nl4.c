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

  if(a>3){
		if(b>4){
			if(c>5){
				result = a + b;
				result = c + a;
				if(d>6){
					if(e>7){
						if(f>8){
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
