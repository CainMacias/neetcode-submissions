class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int filas = matrix.size();
        int cols = matrix[0].size();

        int arr = 0;
        int aba = filas - 1;
        int fila = -1;                          // fila candidata

        while (arr <= aba) {
            int mid = arr + (aba - arr) / 2;
            if (target > matrix[mid][cols - 1]) {
                arr = mid + 1;                  // target es mayor que toda la fila
            } else if (target < matrix[mid][0]) {
                aba = mid - 1;                  // target es menor que toda la fila
            } else {
                fila = mid;                     // target podría estar en esta fila
                break;
            }
        }

        if (fila == -1) {
            return false;
        }

        int l = 0;
        int r = cols - 1;

        while (l <= r) {
            int mitad = l + (r - l) / 2;
            if (target > matrix[fila][mitad]) {
                l = mitad + 1;
            } else if (target < matrix[fila][mitad]) {
                r = mitad - 1;
            } else {
                return true;
            }
        }

        return false;
    }
};