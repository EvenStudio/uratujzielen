#include <cstdlib>
#include <ctime>
int c;
void GenerujTest(){
srand(time(NULL));
c = rand() % 9999;
}