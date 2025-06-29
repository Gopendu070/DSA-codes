#include<iostream>
#include<list>
using namespace std;                   
             //https://www.youtube.com/watch?v=SPDhPuMsM9A&list=PLKZaSt2df1gz775Mz-2gLpY9sld5wH8We&index=22

class BrowserHistory {
public:
    list<string> history;
    list<string> :: iterator it;
    BrowserHistory(string homepage) {       //constructor
        history.push_back(homepage);
        it=history.begin();
    }
    
    void visit(string url) {
        list<string> :: iterator del=it;    //del=it
        del++;                          //del is now moved to the node, from which the whole list has to be removed
        history.erase(del, history.end());     //erase the whole list from del

        history.push_back(url);             //After that the new url is listed in the history
        it++;                       //it is now moved to the current node
    }
    
    string back(int steps) {
        while(it!=history.begin() && steps--)
        {
            it--;
        }
        return *it;                  //derteferencing it, to get the string value
    }
    
    string forward(int steps) {
        while(it!=(--history.end()) && steps--)
        {
            it++;
        }
        return *it;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
