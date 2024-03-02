#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
   int y = 0;
   char ch = ' ';
   string s;
   cout << "Enter Your Word";
   cin >> s;
   vector<char> word(s.size());
   for (int i = 0; i < s.size(); i++)
   {
      word[i] = s[i];
   }
   for (int i = s.size(); i > 0; i--)
   {
      if (ch == word[i])
         break;
      y++;
   }

   cout << "the length of the last word in Your string : " << y;
   return 0;
}