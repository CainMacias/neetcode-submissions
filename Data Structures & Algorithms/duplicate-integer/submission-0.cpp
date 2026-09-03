class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    // Crear un set para almacenar los elementos únicos
        unordered_set<int> seen;
        
        // Recorrer todos los elementos del array
        for (int num : nums) {
            // Si el número ya está en el set, devolvemos true (hay duplicado)
            if (seen.find(num) != seen.end()) {
                return true;
            }
            // Si no está, lo añadimos al set
            seen.insert(num);
        }
        
        // Si no encontramos duplicados, devolvemos false
        return false;
    }
};
