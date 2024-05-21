#include <vector>
using namespace std;
bool HasPairWithSum(const vector<int>& data, int sum) {
    int low = 0;
    int hi = data.size() - 1;
    while (low < hi) {
        int s = data[low] + data[hi];
        if (s == sum) return true;
    }
}