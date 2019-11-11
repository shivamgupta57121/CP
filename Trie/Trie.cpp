#include<bits/stdc++.h>
using namespace std;

struct Trie{
    Trie* children[10];
    bool end;
};

Trie* root = NULL;

Trie* createNode(){
    Trie *x = new Trie();
    for(int i=0;i<10;i++){
        x -> children[i] = NULL;
    }
    x -> end = false;
    return x;
}

void insert(string s){
    if(root==NULL){
        root = createNode();
    }

    Trie* curr = root;

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int index = s[i] -'0';  // '3' - '0' =3
        if(curr -> children[index] == NULL){
            curr -> children[index] = createNode();
        }
        curr = curr -> children[index];
    }
    curr -> end = true;
}

bool search(string s){
    if(root==NULL) return false;

    Trie* curr = root;

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int index = ch -'0';  // '3' - '0' = 3
        if(curr -> children[index] == NULL){
                return false;
        }
        curr = curr -> children[index];
    }
    if((curr!=NULL) && (curr -> end == true)) return true;
    return false;
}

int main(){

    string s[] = {"9876543210", "9876543211", "9876543213"};

    for(int i=0;i<3;i++){
        insert(s[i]);
    }
    cout<<"checking 9876543213 found: "<<search("9876543213")<<endl;
    cout<<"checking 3874543210 found: "<<search("3874543210")<<endl;
    cout<<"checking 9876543210 found: "<<search("9876543210")<<endl;
    cout<<"checking 98765432 found: "<<search("98765432")<<endl;
    //save rocket, hashmap, ball - We will need 26 childrens a->0 , z-> 25;
    return 0;
}
