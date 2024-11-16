#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {544, 12, 7, 33, 21};
    int ans = INT_MAX;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }

    cout << ans;
}

/*The expression arr.size() works for std::vector, std::array,
 or other standard containers in C++. However, if arr is a built-in array
(e.g., int arr[10];),
 calling arr.size() will result in a compilation error because C-style 
 arrays don't have a size() member function. For such arrays, you should
  calculate the size manually using the sizeof operator like this:*/