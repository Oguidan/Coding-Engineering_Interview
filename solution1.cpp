#include <vector>
using namespace std;
bool HasPairWithSum(const vector<int>& data, int sum) {
    int low = 0; // lowest index in the vector data
    int hi = data.size() - 1; // highest index in the vector data
    /*If the tow index cross each other and and none right sum values is find the program end without finding any value*/
    while (low < hi) {
        int s = data[low] + data[hi];
        if (s == sum) return true;
    }
}