#include <iostream>

using namespace std;

// nth power of 2

int main(void) {
    unsigned int nth;
    unsigned int pow = 2;
    unsigned long long int ans = 1;
    
	cin >> nth;
    
	if (nth > 63) {
        cout << "input larger then 63 is not supported!";
        return 1;
    }

    for (unsigned int i=0; i < nth; i++) {
        ans = ans * pow;
    }
    
	 cout << ans;
    
	return 0;
}
