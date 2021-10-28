#include "iostream"
#include "cstdlib"
#include "unistd.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int pid;
    int num;
    pid = fork();
    cout << num << "\n";

    if(pid == 0){
        num = 1;
    }
    else if(pid > 0){
        num = 2;
    }

    cout << num << "\n";
    
}
