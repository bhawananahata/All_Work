#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    int p = x;
    int sum = 0;
    while(p > 0){
        
       sum = sum*10 + p%10; 
       p = p / 10 ;
       cout<<sum<<endl;
       cout<<p<<endl;
    }
    
    if(x==sum){
        return true;
    }
    else{
    return false;}
    
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}