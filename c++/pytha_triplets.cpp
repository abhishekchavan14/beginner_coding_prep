#include<iostream>
using namespace std;

//3 4 5
// 5^2 = 3^2 + 4^2
// ________________________________________________________________________________________________________________________
// string checkpt(int a, int b, int c){
//     if((a*a)+(b*b)==(c*c)){
//         return "yes";
//     }
//     else{
//         return "no";
//     }
// }

// int main(){
//     int a,b,c;
//     cout<<"Enter the perpendicular, base, and hypotenuse"<<endl;
//     cin>>a>>b>>c;
//     cout<<checkpt(a,b,c);
// }
//_____________________________________________________________________________________________________________________

bool checkpt(int n1, int n2, int n3){
    int hypo = max(n1, max(n2,n3));
    int perp, base;
    if(hypo == n1){
        perp = n2;
        base = n3;
    }
    else if(hypo == n2){
        perp = n1;
        base = n3;
    }
    else{
        perp = n1;
        base = n2;
    }

    if((hypo*hypo) == (perp*perp) + (base*base)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    // cout<<checkpt(a,b,c);
    if(checkpt(a,b,c)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}