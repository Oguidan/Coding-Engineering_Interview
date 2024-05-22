#include <vector>
#include <unordered_set>
using namespace std;
/*
 * Complete the 'HasPairWithSum' function below.
 *
 * The function is expected to return a BOOLEAN.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY data
 *  2. INTEGER sum
 */
/*Seek for the complement of each element that give the sum*/
bool HasPairWithSum(const vector<int> data, int sum) {
    unordered_set<int> comp; // complements, empty unordered set
    for (int value:data) {
        if (comp.find(value) != comp.end()) // if the complement isn't found it return comp.end() the last element in a container
            return true;
        comp.insert(sum - value) // insert the complement in the set
    }
    return false;
}