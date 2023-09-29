#include <bits/stdc++.h>
using namespace std;


//uppercase
// int main()
// {

//     string str;
//     getline(cin, str);

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 32;
//         }
//     }

//     cout<<str<<endl;
// }



//lower case
// int main(){

//     string str;
//     getline(cin, str);

//     for(int i =0; i<str.size(); i++){
//         if(str[i]>='A' && str[i]<='Z'){
//             str[i] = str[i] + 32;
//         }

//     }

//     cout<<str<<endl;
// }



//transform function
int main(){

    string str;
    getline(cin, str);

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    // transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;
}