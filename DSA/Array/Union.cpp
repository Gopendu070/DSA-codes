#include <iostream>
#include <set>

using namespace std;

void Union(int a1[], int a2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a1[i] < a2[j])
        {
            cout << a1[i]<<"\t";
            i++;
        } //first print a1[i]  --> then incriment i=i+1
        else if (a1[i] > a2[j])
        {
            cout << a2[j]<<"\t";
            j++;
        }
        else // while a1[i]==a2[j]
        {
            cout << a1[i]<<"\t";
            i++;
            j++;
        }
    }
    while (i < m)
      {  cout << a1[i++]<<"\t"; }
    while (j < n)
      {  cout << a2[j++]<<"\t";  }
}

//using set
void unionSet(int a1[], int a2[], int m, int n){
    set<int> mySet;
     for (int i = 0; i < m; ++i) {
        mySet.insert(a1[i]);
    }
    for (int j = 0; j < n; ++j) {
        mySet.insert(a2[j]);
    }

    cout<<"Union:"<<endl;
    for(auto x:mySet){
        cout<<x<<" ";
    }
}
main()
{   
    int m=5, n=4;
    int arr1[5] = {2,4,5,6,9};
    int arr2[4] = {2,3,5,7};
    cout<<"UNION of two array is :  ";
    Union(arr1, arr2, m, n);
    // unionSet(arr1, arr2, m, n);
    return 0;
}