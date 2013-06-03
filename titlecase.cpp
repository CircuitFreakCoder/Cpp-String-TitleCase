#include <iostream>
#include <string>
using namespace std;


string title_case(string s)
{
    for(unsigned int i=0; i<s.length(); i++)
    {
        if((i==0||s[i-1]== ' ') && (s[i] >= 'a' && s[i] <= 'z'))
            s[i] -= ('a'-'A');
    }
    return s;

}

int main()
{
    cout << "Enter string:" << endl;
    string x;
    getline(cin, x);
    cout<<"Title Case: " << title_case(x);
    
    return 0;
}
