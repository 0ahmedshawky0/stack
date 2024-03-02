#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;
int main()
{
 int t = 0;
 cin >> t;
 stack <int> nums;
 while ( t-- )
 {
    string s;
    cin >> s;
    if ( s == "pop")
       nums.pop();
     else if ( s == "top")
       cout << nums.top() << endl;
       else 
        nums.push(s[s.size()-1] - '0');
 }
 

    return 0;
}