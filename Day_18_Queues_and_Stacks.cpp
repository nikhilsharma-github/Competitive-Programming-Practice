#include <iostream>
#include<bits/stdc++.h>
using namespace std;

        static int j=0;
        static int i=0;
class Solution {
    //Write your code here
  public:
    char s[100],q[100];
    
    void pushCharacter(char ch)
    {
        cout<<endl<<i<<" No. push\n";
        cout<<"pushed "<<ch<<" in stack at"<<i<<endl;
        s[i]=ch;
        i++;
    }
    void enqueueCharacter(char ch)
    {
        cout<<endl<<j<<" No. enqueue\n";
        cout<<"pushed "<<ch<<" in queue at"<<j<<endl;
        q[j]=ch;
        j++;
    }
    char popCharacter(){
        i=i-1;
        cout<<endl<<i<<" No. pop\n";
        cout<<s[i]<<" poped from  stack at"<<i<<endl;
       return s[i];
       
    }
    char dequeueCharacter(){

       static int k=0;
       k++;
        cout<<endl<<k-1<<" No. dequeue\n";
        cout<<q[k-1]<<" poped from  queue at"<<j<<endl;
    
       return q[k-1];
       
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        cout<<obj.popCharacter()<<" dekh 1\n";
        cout<<obj.dequeueCharacter()<<" dekh 2\n";
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}