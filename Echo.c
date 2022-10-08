#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int number;

	if(argc==1) {
		printf("\n");
    exit(1);
  	}
  for(number=1;number<argc;number++){
  	printf("%s ", argv[number]);
  }
  
  return 0;
}
