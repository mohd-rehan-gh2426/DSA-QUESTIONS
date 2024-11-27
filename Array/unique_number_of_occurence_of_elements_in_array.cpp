/*Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int size = arr.size();
        int occurrenceArray[1000] = {0};                   
        int elements[1000] = {0}; 
        int occurrenceIterator = 0;

        for (int i = 0; i < size; ++i) {
            int currentElement = arr[i];
            bool elementExists = false;

            for (int j = 0; j < occurrenceIterator; ++j) {
                if (elements[j] == currentElement) {
                    elementExists = true;
                    break;
                }
            }

            if (!elementExists) {
                int count = 0;
                for (int j = 0; j < size; ++j) {
                    if (arr[j] == currentElement) {
                        ++count;
                    }
                }
                elements[occurrenceIterator] = currentElement;
                occurrenceArray[occurrenceIterator] = count;
                ++occurrenceIterator;
            }
        }

        for (int i = 0; i < occurrenceIterator; ++i) {
            for (int j = i + 1; j < occurrenceIterator; ++j) {
                if (occurrenceArray[i] == occurrenceArray[j]) {
                    return false;
                }
            }
        }

        return true;
    }
};

