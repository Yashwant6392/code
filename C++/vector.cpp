// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n, i;
//     cout << "enter no. of elements: ";
//     cin >> n;
//     vector<int> num(n);
//     for (i = 0; i < n; i++)
//     {
//         cin >> num[i];
//     }
//     for (i = 0; i < n; i++)
//     {
//         cout << num[i];
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n, i, input, sum = 0;
//     cout << "enter no. of elements: ";
//     cin >> n;
//     vector<int> nums;
//     for (i = 0; i < n; i++)
//     {
//         cin >> input;
//         nums.push_back(input);
//         sum = sum + input;
//     }
//     cout << "you entered: ";
//     for (int num : nums)
//     {
//         cout << num << " ";
//     }
//     cout << endl;
//     cout << sum;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n, i;
//     cout << "enter no. of elements: " << endl;
//     cin >> n;
//     vector<int> arr(n);
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int> classarray[3];
    classarray[0].push_back(80);
    classarray[0].push_back(89);
    classarray[0].push_back(99);

    classarray[1].push_back(56);
    classarray[1].push_back(96);
    classarray[1].push_back(87);

    classarray[2].push_back(95);
    classarray[2].push_back(91);

    for(i=0;i<3;i++)
    {
        cout<<"class"<<i<<": ";
    
    for(int score:classarray[i])
    {
        cout<<score<<" ";

    }
    cout<<endl;
}
    return 0;
}
