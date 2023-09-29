#include<iostream>
using namespace std;
//(1C2)16 = (450)10
//character by character--> 2*1 + C*16 + 1*256
//'2' = '2' - '0'
//'C'(11) = 'C' - 'A' + 10

int convert(string n){
    int s = n.size();
    int ans = 0;
    int base = 1;
    for(int i = s-1; i>=0; i--){
        if(n[i]>='0' && n[i]<='9'){
            ans = ans + ((n[i]-'0')*base);
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans = ans + (((n[i]-'A')+10)*base);
        }
        base*=16;
    }
    return ans;
}

int main(){
    string num;
    cin>>num;
    cout<<convert(num);
}