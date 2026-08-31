var twoSum = function(numbers, target) {
    var left = 0;
    var right = numbers.length - 1;

    while (left < right) { // Changed to < so pointers don't meet
        var sum = numbers[left] + numbers[right];

        if (sum === target) {
            return [left+1, right+1]; // Changed {} to []
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return [];
};
