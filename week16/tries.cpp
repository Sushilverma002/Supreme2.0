#include <iostream>
using namespace std;
/*tries*/

/*node creation*/
class TrieNode{
    public:
        char value;
        TrieNode* children[26]; /*it is a array of pointer store 26 char */
        bool isTerminal;

        TrieNode(char val){
            this->value=val;
            for(int i=0; i<26;i++){
                children[i]=NULL;
            }
            this->isTerminal=false;/*by defalut as false to terminal*/
        }
};

void insertNode(TrieNode*root,string word){
    // cout<<"recieved word"<<word<<"insertion"<<endl;
    //base case
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }

    char ch=word[0];
    int index=ch - 'a'; /*to find the index of the character*/
    TrieNode*child;

    if(root->children[index] !=NULL){
        //present
        child =root->children[index];
    }
    else{
    /*absent*/
        child =new TrieNode(ch);
        root->children[index]=child;
    }

    //recursion
    insertNode(child,word.substr(1));
}


/*searching*/

bool searchChar(TrieNode*root,string word){
    //base
    if(word.length()==0){
        return root->isTerminal;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;

    if(root->children[index] !=NULL){
        //PRESENT 
        child=root->children[index];
    }
    else{
        //not found
        return false;
    }

    //baki recursion
    bool otherRecursion=searchChar(root,word);
    return otherRecursion;
}
int main(){
    TrieNode*root=new TrieNode('-');
    insertNode(root,"donation");
    insertNode(root,"love");
    insertNode(root,"care");
    insertNode(root,"lover");
    insertNode(root,"lov");
    insertNode(root,"cat");
    insertNode(root,"car");
    insertNode(root,"com");
    insertNode(root,"care");
    insertNode(root,"cater");
    insertNode(root,"sushil");

    cout<<"insertion done"<<endl;

    if(searchChar[root,'sushil']){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    return 0;
}