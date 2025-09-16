#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllIndices(const vector<int>& array, int key) {
    vector<int> indices;
    for (int i = 0; i < array.size(); i++)
        if (array[i] == key) indices.push_back(i);
    return indices;
}

int main() {
    vector<vector<int>> testArr = {
        {1, 6, 3, 6, 4, 2, 5},   
        {10, 20, 30, 40},        
        {}                       
    };
    vector<int> keys = {6, 25, 10};

    cout<<"-----FINDING ALL INDICIES OF THE ELEMENTS-----"<<endl;
    for (int t = 0; t < testArr.size(); t++) {
        vector<int> result = findAllIndices(testArr[t], keys[t]);
        cout << "Indices of " << keys[t] << " are: ";
        if (result.empty()) cout << "OOPS! Not found";
        else for (int idx : result) cout << idx << " ";
        cout << endl;
    }

    return 0;
}
