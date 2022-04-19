
#include <array>
#include <vector>
using namespace std;

class Solution {
    
    inline static const int NOT_FOUND = -1;
    inline static const array<int, 2> RANGE_VALUES {0, 1000};
    
public:
    int specialArray(vector<int>& input) {
        if (input.size() == = 0) {
            return 0;
        }
        if (input.size() == 1 && input[0] > 0) {
            return 1;
        }

        vector<int> frequency(RANGE_VALUES[1] + 1);
        for (const auto& n : input) {
            frequency[n]++;
        }

        int x_elementsGreaterThanOrEqual_x = 0;
        for (int n = RANGE_VALUES[1]; n >= RANGE_VALUES[0]; n--) {
            x_elementsGreaterThanOrEqual_x += frequency[n];
            if (n == x_elementsGreaterThanOrEqual_x) {
                return n;
            }
        }
        return NOT_FOUND;
    }
};
