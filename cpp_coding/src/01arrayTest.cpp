#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10];
    memset(arr, 0, sizeof(arr));
    arr[0] =  1;
    arr[1] =  2;
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
