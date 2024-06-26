#include "my_class.h" // заголовочный файл, расположенный в локальной директории
#include <iostream> // заголовочный файл стандартной библиотеки

#define AMOUNT 5 // макро параметр

using namespace N;
using namespace std;

void my_class::do_something()
{
    cout << "Doing something! " << AMOUNT << " times a day" endl;
}