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

  if(f<12){
		if(e<11){
			if(d<9){
				result = a + b;
				result = c + a;
				if(c<7){
					if(b<6){
						if(a<8){
							result = a + b + c + d + e + f;
							printf("%d", result);
						}
					}
				}
			}
		}
	}

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
