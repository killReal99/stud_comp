#include<iostream> // заголовочный файл стандартной библиотеки
#include "add.h" // заголовочный файл, расположенный в локальной директории

#define Y 5 // добавить макрос

using namespace std;

int main() {
  int x = 10;
  cout << "Addition is " << sum(x, Y) << endl;
}