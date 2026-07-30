#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    
    cout << vec[0] << endl;
    
    // Functions
    cout << "size = " << vec.size() << endl;
    
    vec.push_back(25); // Removed << endl
    vec.push_back(23); // Removed << endl
    vec.pop_back();    // Removed << endl
    
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(3) << endl;
    
    return 0;
}
