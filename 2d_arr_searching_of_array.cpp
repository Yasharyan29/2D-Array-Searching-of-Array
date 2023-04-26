#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter two inputs value: ";
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) //i is represting row 
    {
        for (int j = 0; j < m; j++) //j is representing coloumn 
        {
            cin >> arr[i][j];
        }
    }
    cout << "your array is" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "let find the element" << endl;
    int x;
    cout << "enter the number you have to find it: ";
    cin >> x;
    bool flag = false; // 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout<<j<<" "<<i<<endl;
                flag =true;
            }
        }
    }
    if(flag){
        cout<<"element is found"<<endl;
    }
    else{
        cout<<"element is not found"<<endl;
    }
    return 0;
}