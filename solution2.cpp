#include <vector>
#include <unordered_set>
using namespace std;
bool HasPairWithSum(const vector<int> data, int sum) {
    unordered_set<int> comp; // complements
    for (int value:data) {
        if (comp.find(value) != comp.end())
            return true;
        comp.insert(sum - value)
    }
    return false;
}