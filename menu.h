#ifndef MENU_H
#define MENU_H

#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Menu {
private:
    // Create map to store ingredient counts
    unordered_map<string, int> ingredientCounts;

public:
    Menu() {
        // Intalize the count of the ingredients at zero
        ingredientCounts = {
            {"lettuce", 0},
            {"tomato", 0},
            {"onion", 0},
            {"pickle", 0},
            {"cheese", 0},
            {"mayo", 0},
            {"patty", 0},
            {"bun", 0},
            {"fries", 0},
            {"sweetPotatoFries", 0},
            {"waffleFries", 0}
        };
    }

    // Function to increment ingredient count
    void incrementIngredient(const string& ingredient) {
        if (ingredientCounts.find(ingredient) != ingredientCounts.end()) {
            ingredientCounts[ingredient]++;
        }
    }

    // Function to get ingredient count
    int getIngredientCount(const string& ingredient) const {
        if (ingredientCounts.find(ingredient) != ingredientCounts.end()) {
            return ingredientCounts.at(ingredient);
        }
        return 0; // ingredient not found
    }

    // Print top 5 least used ingredients
    vector<pair<string, int>> getLeastUsedIngredients() const {
        // Create a vector of pairs to store ingredient counts
        vector<pair<string, int>> countsVector;
        for (const auto& pair : ingredientCounts) {
            countsVector.push_back(pair);
        }

        // Sort the vector based on ingredient counts in ascending order
        sort(countsVector.begin(), countsVector.end(), [](const auto& a, const auto& b) {
            return a.second < b.second; // Sort by count
        });

        // Return the top 5 least used ingredients
        vector<pair<string, int>> leastUsedIngredients;
        for (size_t i = 0; i < min<size_t>(5, countsVector.size()); ++i) {
            leastUsedIngredients.push_back(countsVector[i]);
        }
        return leastUsedIngredients;
    }
};

#endif // MENU_H
