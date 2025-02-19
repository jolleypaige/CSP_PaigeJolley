// Paige Jolley, Updated Hello World C
#include <stdio.h>

void name(char name[30]){
    printf("Hello %s.\n", name);

}
int main(void){
   name("bob");
   name("billy");
   name("joe");
   name("bobby");
   name("joey");
    return 0;  
}