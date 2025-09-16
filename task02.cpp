#include <iostream>
#include <string>
using namespace std;

int findSubstring(const string& text, const string& patrn) {
    if (patrn.empty()) 
    return 0; 

    for (int i = 0; (i+patrn.size()) <= text.size(); i++) {
        if (text.substr(i, patrn.size()) == patrn)
            return i;
    }
    return -1; 
}

int main() {
    cout<<"--Pattern at the Beginning--"<<endl;
    cout << findSubstring("Pakistan lost against India", "Pakistan") << endl;
    
    cout<<"\n--Pattern at the End--"<<endl;
    cout << findSubstring("Pakistan lost against India", "India") << endl; 

    cout<<"\n--Pattern NOT Present--"<<endl;
    cout << findSubstring("Pakistan lost against India", "win") << endl; 

    cout<<"\n--Empty Pattern--"<<endl;
    cout << findSubstring("Pakistan lost against India", "") << endl; 

    return 0;
}
