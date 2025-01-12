#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr;
    /* code */
    for(int i = 0; i < 10; i++) {
        arr.push_back(i);
    }

    arr.insert(arr.begin() + 2, 100);
    arr.insert(arr.begin() , -1);
    arr.pop_back();
    arr.erase(arr.begin() + 2);
    int a = arr[0];
    arr[0] = 100;
    int index = find(arr.begin(), arr.end(), 100) - arr.begin();
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    cout << "index: " << index << endl;
    return 0;
}
