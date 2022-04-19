
public class Solution {

    private static final int NOT_FOUND = -1;
    private static final int[] RANGE_VALUES = new int[]{0, 1000};

    public int specialArray(int[] input) {
        if (input.length == 0) {
            return 0;
        }
        if (input.length == 1 && input[0] > 0) {
            return 1;
        }

        int[] frequency = new int[RANGE_VALUES[1] + 1];
        for (int n : input) {
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
}
