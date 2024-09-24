#include <bits/stdc++.h>
private:
bool validch(char ch){
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9')){
        return 1;
    }
    return 0;
} 
char tolower(char ch){
    if((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }

}

public:
bool checkPalindrome(string s)
{
    // Write your code here.
    string temp=" ";
    for(int j=0;j<s.length();j++){
        if(validch(s[j])){
            temp.push_back(s[j]);
        }

    }
    
}