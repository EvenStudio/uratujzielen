#include <cstdlib>
#include <ctime>
int a;
void GenerujTest(){
srand(time(NULL));
a = rand() % 9999;
}