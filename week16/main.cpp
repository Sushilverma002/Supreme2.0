#include<iostream>
#include<unordered_map>
// #include<map>
using namespace std;

void countCharacter(unordered_map<char,int>&mapping,string str){
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        mapping[ch]++;
    }
}
int main(){

    // //insertion
    
    // // creation
    // pair<string,int>p=make_pair('sushi',25);
    // pair<string,int>q('sush',26);

    string str="lovebabbar";
    unordered_map<char,int>mapping;
    countCharacter(mapping,str);

    //trversing in map using FOR EACH loop
    for(auto i:mapping){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    return 0;
}