#include <bits/stdc++.h>

using namespace std;

int priority(char a){
    if(a == '^')
        return 3;
    else if(a=='*' || a=='/')
        return 2;
    else
        return 1;
}

void conversionToPostfix(string s){
    int len=s.length();
    stack<char> st;
    string result;
    for(int i=0;i<len;i++){
        if(isalnum(s[i])){
            result += s[i];
        }

        else if(s[i]=='('){
            st.push('(');
        }

        else if(s[i]==')'){
            while(st.top()!='('){
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && priority(st.top()) >= priority(s[i])){
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        result += st.top();
        st.pop();
    }

    cout<<result;
}

int main()
{
    string str;
    cout<<"Enter Infix expression:";
    getline(cin,str);
    conversionToPostfix(str);
    return 0;
}
