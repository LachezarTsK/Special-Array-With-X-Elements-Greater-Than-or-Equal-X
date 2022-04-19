
/**
 * @param {number[]} input
 * @return {number}
 */
var specialArray = function (input) {
    if (input.length === 0) {
        return 0;
    }
    if (input.length === 1 && input[0] > 0) {
        return 1;
    }
    const NOT_FOUND = -1;
    const RANGE_VALUES = [0, 1000];

    const frequency = new Array(RANGE_VALUES[1] + 1).fill(0);
    for (let n of input) {
        frequency[n]++;
    }

    let x_elementsGreaterThanOrEqual_x = 0;
    for (let n = RANGE_VALUES[1]; n >= RANGE_VALUES[0]; n--) {
        x_elementsGreaterThanOrEqual_x += frequency[n];
        if (n === x_elementsGreaterThanOrEqual_x) {
            return n;
        }
    }
    return NOT_FOUND;
};
